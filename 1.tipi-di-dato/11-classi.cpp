#include <iostream>
using namespace std;

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

Class String;
istream& operator>>(istream&, String&);
ostream& operator<<(ostream&, const String&);

class String
{
	public:
		// Definizione dei costruttori
		// Si definiscono 3 costruttori sfruttando l'overloading degli operatori -
		// letteramente sovraccarico - , ogni istanza infatti e' diversa dall'altra
		// in base alla lista dei parametri.
		//
		// String() e' il costruttore di default, non richiede un esplicita
		// inizializzazione iniziale
		//
		// Si noti il terzo costruttore, String(const String&), e' detto
		// costruttore di copia, poiche' inizializza un oggetto della classe
		// come copia per un secondo oggetto.
		String();
		String(const char*);
		String(const String&);

		// Distruttore
		~String();

		// L'overloaded di alcuni operatori di assegnamento
		Stringa& operator=(const String&);
		Stringa& operator=(const char*);

		// L'overloaded di alcuni operatori di uguaglianza
		bool operator==(const String&);
		bool operator==(const char*);

		// L'overloaded dell'operatore di subscript[]
		char& operator[](int);

		// Metodi di accesso
		int size() { return _size; };
		char* c_str() { return _string };

	private:
		int _size;
		char *_string;
}

int main() {

   return(0);
}

