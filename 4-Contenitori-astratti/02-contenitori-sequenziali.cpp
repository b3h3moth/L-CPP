#include <iostream>
#include <string>
using namespace std;

#include <vector>
#include <list>

int main() {
	
	// CONTENITORI SEQUENZIALI (SEQUENCES CONTAINER)
	////////////////////////////////////////////////////////////////////////////
	// Per lavorare con i sequences container e' neccessario includere nel
	// codice sorgente uno dei seguenti file header:
	//
	// #include <vector>
	// #include <list>
	// #include <deque>
	// #include <set>
	// #include <map>
	//
	// Un oggetto di tipo container si definisce inserendo il nome del tipo
	// del container, seguito, all'interno di parentesi angolari, dal tipo di
	// dato degli elementi del vettore, e infine dall'identificatore.
	
	vector<string> str_vector;
	list<int> int_list;

	// Il modo piu' semplice per inserire un elemento e' mediante l'operazione
	// push_back(), che ne aggiunge uno alla fine del container; list e deque 
	// supportano anche l'inserimento in testa, mediante l'opreazione 
	// push_front().
	
	string input_string;

	// Legge una stringa in input, dopodiche' una copia di essa la si pone
	// nel container str_vector:
	cout << "Uso di push_back() e push_front()" << endl;

	cout << "Inserisci una stringa, saranno collocate nel container vettore "
		 << "una dopo l'altra. - quit per uscire.\n: " ;
	while (cin >> input_string) {
		if (input_string == "quit")
			break;
		str_vector.push_back(input_string);
	}

	// Oltre a visualizzare in output il contenuto del container vettore 
	// str_vector, si assegnano str_vector.size() elementi al container list
	// int_list, mediante push_front(), ciascun elemento sara' inserito in
	// testa.
	
	for (int i=0; i<str_vector.size(); i++) {
		cout << str_vector[i] ;
		int_list.push_front(i);
	}

	// Specificare la dimensione e ridimensionamento di un container
	////////////////////////////////////////////////////////////////////////////
	// La dimensione puo' essere una espressione sia costante sia non costante;
	// inoltre un container puo' essere ridimensionato mediante l'operazione
	// resize():
	cout << "\nDimensione e ridimensionamento" << endl;

	const int list_len = 20;
	int dim = 10;
	
	// Si utilizza una costante intera per definire l'ampiezza di un container
	// list:
	list<int> new_int_list(list_len);
	
	// Si definisce un vettore di dimensione non costante, al cui interno si 
	// pone una stringa:
	vector<string> language_programming(dim, "C++");

	cout << "Dimensione del vettore: " << language_programming.size() << endl;

	// La dimensione del vettore appena creato puo' essere modificata; ad
	// esempio se si volesse incrementare di N volte si potrebbe usare il
	// seguente approccio, ogni nuovo elemento peraltro sara' inizializzato con
	// il valore di default:
	
	language_programming.resize(3 * language_programming.size());
	cout << "Dimensione del vettore: " << language_programming.size() << endl;

	cout << "inizializzazione degli elementi con il valore di default: " << endl;

	for (int i = 0; i<language_programming.size(); i++)
		cout << language_programming[i] ;

	// I nuovi elementi creati mediante l'operazione resize() saranno
	// inizializzati con il valore di default, tuttavia si puo' anche
	// specificare un valore diverso, aggiungendo un secondo argomento.

	// Si raddoppia il numero degli elementi e si inizializzano con un valore
	// diverso da quello di default:
	
	cout << "\ninizializzazione degli elementi con un valore definito: " << endl;

	language_programming.resize(2 * language_programming.size(), "ANSI");

	for (int i = 0; i<language_programming.size(); i++)
		cout << language_programming[i] ;

	// Un nuovo oggetto container puo' essere inizializzato con la copia di un
	// container esistente:
	
	vector<string> new_str_vector(language_programming);

	// Container ed operatori relazionali
	////////////////////////////////////////////////////////////////////////////
	// Ciascun container supporta taluni operatori relazioni che consentono
	// l'implementazione delle seguenti operazioni tra due container:
	// - Uguaglianza ==
	// - Disuguaglianza !=
	// - Minore di <
	// - Minore o uguale a <=
	// - Maggiore di >
	// - Maggiore uguale a >=
	// 
	// Il confronto avviene per coppie tra gli elementi di ciascun container.
	
	vector<int> int_vector



	return(0);
}
