#include <iostream>
#include <iomanip>
#include <cstring> 
#include <cstdlib>
using namespace std;

#include "String.h" 


// Costruttore di conversione
String::String(const char *str) : length((str!=0) ? strlen(str) : 0 )
{
    cout << "Costruttore di default (conversione): " << str << endl;
    setString(str); 
} 


// Costruttore di copia
String::String(const String &copy) : length(copy.length)
{
   cout << "Costruttore di copia " << copy.sPtr << endl;
   setString(copy.sPtr);
} 


// Distruttore
String::~String()
{
    cout << "Distruttore: " << sPtr << endl;
   delete [] sPtr;
}


/* Ridefinizione dell'operatore =
Evita l'auto assegnamento */
const String &String::operator=(const String &right_operand)
{
    cout << "Invocato operatore = " << endl;
    
    if (&right_operand != this)
    {         
    	delete [] sPtr;
	length = right_operand.length;
	setString( right_operand.sPtr );
    } else
    	cout << "Tentativo di assegnare una stringa a se stessa" << endl;
    
    return *this;
} 


/* Ridefinizione operatore +=
Aggiunge in coda all'operando destro e memorizza in coda */
const String &String::operator+=(const String &right_operand)
{
    size_t newLength = length + right_operand.length;
    char *tempPtr = new char[newLength + 1];
    
    strcpy(tempPtr, sPtr);
    strcpy(tempPtr + length, right_operand.sPtr);
    
    delete [] sPtr;
    sPtr = tempPtr;
    length = newLength;

    return *this;
}


/* Ridefinizione operatore !
Verifica se una stringa e' vuota */
bool String::operator!() const
{
    return length == 0; 
}


/* Ridefinizione operatore ==
Verifica se due stringhe sono uguali */
bool String::operator==(const String &right_operand) const
{ 
    return strcmp(sPtr, right_operand.sPtr) == 0; 
}


/* Ridefinizione operatore <
Verifica se la dimensione di una stringa e' < di un'altra */
bool String::operator<(const String &right_operand) const
{
    return strcmp(sPtr, right_operand.sPtr) < 0; 
}


/* Ridefinizione operatore di subscript []
Restituisce un riferimento ad un carattere come lvalue modifcabile */
char &String::operator[](int subscript)
{
    if (subscript < 0 || subscript >= length)
    {
    	cerr << "Err: Subscript " << subscript << " fuori dai limiti" << endl;
	exit(1);
    }
    
    return sPtr[subscript]; 
}


/* Ridefinizione operatore di subscript [] costante
Restituisce un riferimento ad un carattere come rvalue non modifcabile */
char String::operator[](int subscript) const
{
    if (subscript<0 || subscript>=length)
    {
    	cerr << "Err: Subscript " << subscript << " fuori dai limiti" << endl;
	exit(1);
    }
    
    return sPtr[subscript]; 
}


/* Ridefinizione operatore ()
Restituisce una stringa che inizia a index di lunghezza subLength */
String String::operator()(int index, int subLength) const
{
    if (index<0 || index>=length || subLength<0)
    	return ""; 
    
    int len;
    
    if ((subLength==0) || (index+subLength>length))
    	len = length - index;
    else
    	len = subLength;
    
    char *tempPtr = new char[ len + 1 ];
    
    strncpy(tempPtr, &sPtr[index], len);
    tempPtr[len] = '\0';
    
    String tempString(tempPtr);
    delete [] tempPtr;
    return tempString;
}

// Restituisce la lunghezza di una stringa
int String::getLength() const 
{ 
    return length; 
} 


// Funzione di utilita'
void String::setString(const char *string2)
{
    sPtr = new char[length+1];
    
    if (string2!=0)
    	strcpy(sPtr, string2); 
    else
    	sPtr[0] = '\0'; 
} 

// Ridefinizione operatore di output
ostream &operator<<( ostream &output, const String &s )
{
    output << s.sPtr;
    return output; 
} 

// Ridefinizione operatore di input
istream &operator>>( istream &input, String &s )
{
    char temp[100]; 
    input >> setw(100) >> temp;
    s = temp; 
    return input;
} 
