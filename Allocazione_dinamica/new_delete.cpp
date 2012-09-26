#include <iostream>
using namespace std;

int main() {
	// L'OPERATORE new alloca un oggetto nella memoria heap, new restituisce un
	// puntatore all'ggetto al quale e' stata assegnata la memoria; da notare 
	// che allocare la memoria non vuol dire inizializzare, sono due concetti
	// diversi, l'inizializzazione dell'oggetto puo' essere contestuale alla
	// dichiarazione oppure puo' essere fatta successivamente.
	//
	// In questo caso si alloca la memoria necessaria per contenere un oggetto
	// di tipo intero
	int *elem = new int;		
	
	// Oltre ad allocare un oggetto nell'heap, lo si inizializza
	int *elem2 = new int(1024);

	// Allocazione di un array, ma non inizializzazione
	int *array = new int[10];

	string *stringa = new string("C++ Programming");

	int i;
	for (i=0; i<10; i++) {
		array[i] = i;
		cout << i << ": " << array[i] << " " << &array[i] << endl;
	}

	cout << "&array[0]: " << &array[0] << " Indirizzo iniziale dell'array" << endl;
	cout << "    array: " << array << " Indirizzo iniziale dell'array" << endl;
	cout << "  stringa: " << stringa << endl;
	cout << " *stringa: " << *stringa << endl;
	cout << "    elem2: " << elem2 << elem2 << endl;
	cout << "   *elem2: " << *elem2 << endl;
	cout << "     elem: " << elem << endl;
	// Non e' inizializzato, per cui il risultato sara' 0
	cout << "    *elem: " << *elem << endl;

	// Si rilascia lo spazio di memoria allocato per ciascun elemento
	delete stringa;
	delete elem;
	delete elem2;
	delete [] array;
	
	return(0);
}
