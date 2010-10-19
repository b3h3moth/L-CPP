#include <iomanip>
#include <iostream>
using namespace std;

#include <string.h>
#include <assert.h>


/* IL COSTRUTTO DI CLASSE
 * Saranno ora presenate le nozioni essenziali per la realizzazione di una
 * classe in C++, tutto cio' che serve per poter continuare lo studio del
 * linguaggio, senza pero' tuttavia entrare eccessivamente nel dettaglio, ma
 * quanto basta per poter proseguire la lettura delle sorgenti.
 *
 * La classe si definisce mediante la parola chiave class piu' un
 * identificatore, che assume il ruolo di specificatore di tipo; il corpo e'
 * caratterizzato da una sezione publica ed una sezione private.
 *
 * class Identificatore
 * {
 * public:
 *
 * 		// contiene i metodi della classe o funzioni membro.
 *		// L'interfaccia pubblica.
 *	
 * private:
 *
 * 		// I dati, non accessibili dall'esterno della classe.
 *
 * };
 *
 * I metodi della sezione public sono le operazioni con cui un utente puo'
 * interagire con l'oggetto della classe.
 */

// Si definisce una classe String, per gestire alcune operazioni sulle stringhe.


class String;
istream& operator>>( istream&, const String& );
ostream& operator<<( ostream&, const String& );

class String
{
	public:
		// Definizione dei costruttori
		// Si definiscono 3 costruttori sfruttando l'overloading delle funzioni
		// - letteralmente sovraccaricamento -, ogni istanza infatti e' diversa 
		// dall'altra in base alla lista dei parametri.
		//
		// String() e' il costruttore di default, non richiede un esplicita
		// inizializzazione iniziale
		//
		// Si noti il terzo costruttore, String(const String&), e' detto
		// costruttore di copia, poiche' inizializza un oggetto della classe
		// come copia per un secondo oggetto.
		//String();
		String(const char* = 0);
		String(const String&);

		// Distruttore
		~String();

		// L'overloading di alcuni operatori di assegnamento
		String& operator=(const String&);
		String& operator=(const char*);

		// L'overloading di alcuni operatori di uguaglianza
		bool operator==(const String&);
		bool operator==(const char*);

		// L'overloading dell'operatore di subscript[]
		char& operator[](int);

		// Metodi di accesso.
		// I metodi di una classe, o come accennato precedentemente le funzioni 
		// membro di una clsse, possono essere definiti sia all'interno sia 
		// all'esterno della classe stessa.
		int size() { return _size; };
		char *c_str() { return _string; };

	private:
		int _size;
		char *_string;
};

inline bool	String::operator==(const String &s)		
{
    if ( _size != s._size ) 
	 return false;

    return strcmp( _string, s._string ) ? false : true; 
}


inline bool String::operator==(const char *s)
{
    return strcmp( _string, s ) ? false : true; 
}

// Costruttore di default
inline String::String( const char *str ) 
{
	if ( ! str ) {
	     _size = 0; 
	     _string = 0;
	}
	else {
		_size = strlen( str );
		_string = new char[ _size + 1 ];
		strcpy( _string, str );
	}
}

// Costruttore di copia
inline String::String( const String &rhs )
{
	_size = rhs._size;
	if ( ! rhs._string )
	     _string = 0;
	else 
	{
		_string = new char[ _size + 1 ];
		strcpy( _string, rhs._string );
	}
}

inline String::~String() 
{ 
	delete [] _string; 
}

inline String& String::operator=( const char *s )
{
    if ( ! s ) 
    { 
	   _size = 0; 
	   delete [] _string;
	   _string = 0; 
    }
    else 
    {
   	_size = strlen( s );
   	delete [] _string;
   	_string = new char[ _size + 1 ];
   	strcpy( _string, s );
    }

    return *this;
}

inline String& String::operator=( const String &rhs )
{
	if ( this != &rhs ) 
	{
    		delete [] _string;
    		_size = rhs._size;
    		if ( ! rhs._string ) 
			_string = 0; 
    		else 
		{
			_string = new char[ _size + 1 ];
			strcpy( _string, rhs._string );
    		}
    	}
    
	return *this;
}


inline char& String::operator[]( int elem )
{
    	assert( elem >= 0 && elem < _size );
    	return _string[ elem ];
}


inline istream& operator>>( istream &io, String &s )
{
    	// artificial limit of 4096 characters read
    	const int limit_string_size = 4096;
    
    	char inBuf[ limit_string_size ];
    
    	// setw is part of iostream library
    	// limits characters read to value-1
    	io >> setw( limit_string_size ) >> inBuf;

    	s = inBuf; // String::operator=( const char* );
    	return io;
}

inline ostream& operator<<( ostream& os, String& s )
{
    	return os << s.c_str();
}

int main()
{
    int aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0,
        theCnt = 0, itCnt = 0, wdCnt = 0, notVowel = 0;

    // invokes String( const char* = 0 )
    String buf, the( "the" ), it( "it" );

    // invokes operator>>( ostream&, String& )
    while ( cin >> buf ) {
        ++wdCnt;

        // invokes operator<<( ostream&, const String& )
        cout << buf << " ";
    
        if ( wdCnt % 12 == 0 )
	     cout << endl;

        // invokes String::operator=(const String&) and
        //         String::operator=( const char* );
        if ( buf == the || buf == "The" )
                 ++theCnt;
        else
        if ( buf == it || buf == "It" )
                 ++itCnt;

        // invokes String::size()
        for ( int ix = 0; ix < buf.size(); ++ix )
        {
            // invokes String::operator[](int)
            switch( buf[ ix ] )
            {
                    case 'a': case 'A': ++aCnt; break;
                    case 'e': case 'E': ++eCnt; break;
                    case 'i': case 'I': ++iCnt; break;
                    case 'o': case 'O': ++oCnt; break;
                    case 'u': case 'U': ++uCnt; break;
                    default: ++notVowel; break;
            }
        }
    }

    cout << "\n\n"
         << "Words read: " << wdCnt << "\n\n"
         << "the/The: " << theCnt << "\n"
         << "it/It: " << itCnt << "\n\n"
         << "non-vowels read: " << notVowel << "\n\n"
         << "a: " << aCnt << "\n"
         << "e: " << eCnt << "\n"
         << "i: " << iCnt << "\n"
         << "o: " << oCnt << "\n"
         << "u: " << uCnt << endl;

	return(0);
}

