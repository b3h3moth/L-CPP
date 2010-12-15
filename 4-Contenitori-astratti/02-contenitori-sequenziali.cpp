#include <iostream>
#include <string>
using namespace std;

#include <vector>
#include <list>

int main() {
	
	// CONTENITORI SEQUENZIALI (SEQUENCES CONTAINER)
	////////////////////////////////////////////////////////////////////////////
	// Per lavorare con i contenitori sequenziali e' neccessario includere nel
	// codice sorgente uno dei seguenti file header:
	//
	// #include <vector>
	// #include <list>
	// #include <deque>
	// #include <set>
	// #include <map>
	//
	// Un oggetto di tipo contenitore si definisce inserendo il nome del tipo
	// del contenitore, seguito, all'interno di parentesi angolari, dal tipo di
	// dato degli elementi del vettore, e infine dall'identificatore.
	vector<string> str_vector;
	list<int> int_list;

	// Il modo piu' semplice per inserire un elemento e' mediante l'operazione
	// push_back(), che aggiunge un elemento alla fine del contenitore; list e
	// deque supportano anche l'inserimento in testa, mediante l'opreazione 
	// push_front().
	
	string input_string;

	// Legge una stringa in input, dopodiche' una copia di essa la si pone
	// nel contenitore str_vector:
	cout << "Uso di push_back()" << endl;

	while (cin >> input_string) {
		if (input_string == "quit")
			break;
		str_vector.push_back(input_string);
	}

	// Oltre a visualizzare in output il contenuto del contenitore vettore 
	// str_vector, si assegnano str_vector.size() elementi al contenitore list
	// int_list, mediante push_front(), per cui gli elementi sono inseriti in
	// testa.
	
	for (int i=0; i<str_vector.size(); i++) {
		cout << str_vector[i] ;
		int_list.push_front(i);
	}

	// Specificare la dimensione di un contenitore
	////////////////////////////////////////////////////////////////////////////
	// La dimensione puo' essere una espressione sia costante sia non costante:
	
	const int list_len = 20;

	list<int> new_int_list(list_len);
	extern int 

	string new_pass;
	cout << "inserisci pass: " ;
	cin >> new_pass ;
	
	vector<string> my_password(new_pass);




	
	


	return(0);
}
