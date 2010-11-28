#include <iostream>
#include <vector>

using namespace std;

#define MAX_ARR 15

int main() {

	// ISTRUZIONI CICLO: FOR, WHILE, DO WHILE
	////////////////////////////////////////////////////////////////////////////
	// Nei programmi e' sovente utilizzare un insieme ripetuto di istruzioni
	// fintanto che talune condizioni restano logicamente vere (true); il
	// linguaggio C++ fornisce tre istruzioni di ciclo:
	// 
	// 1 - Il ciclo for;
	// 2 - Il ciclo while;
	// 3 - Il ciclo do while.
	//
	// Il ciclo for e il ciclo while iniziano con una condizione iniziale che
	// determina se eseguire o meno l'istruzione o il blocco di istruzioni,
	// qualora la condizione risultasse falsa l'istruzione o il blocco di
	// istruzioni non sarebbe eseguito neanche una volta; il ciclo do while
	// invece garantisce che l'istruzione o il blocco di istruzioni sia eseguito
	// per lo meno una volta, poiche' la condizione e' esaminata dopo
	// l'esecuzione del ciclo stesso. Questa e' una differenza sostanziale e
	// molto importante allorquando si dovra' decidere quale ciclo utilizzare.
	
	
	// CICLO FOR
	////////////////////////////////////////////////////////////////////////////
	// E' pensato per esprimere cicli piuttosto regolari, e' adoperato infatti
	// per scandire una struttura dati di lunghezza fissa, quali possono essere
	// un array o un vector. La sintassi e' la seguente:
	//
	// for (init; condition; expression)
	// 		statement
	// 
	// Logicamente dovrebbe produrre il seguente risultato: "inserire un
	// contatore, verificare una condizione, aggiornare il contatore".
	//
	// L'inizializzazione (init) serve per fornire un valore iniziale che
	// successivamente sara' incrementato; la caratteristica della condizione
	// (condition) invece e' di lavorare sul controllo del ciclo, tale
	// condizione se risulta essere true consente l'esecuzione dell'istruzione
	// o del blocco di istruzioni, qualora la condizione risultasse falsa, non
	// sara' eseguita alcuna istruzione. Infine, l'espressione (expression) e'
	// valutata alla conclusione di ciascun ciclo, generalmente utilizzata per
	// la modifica delle variabili predisposte all'inizializzazione.

	cout << "Ciclo for con array" << endl;
	
	int int_arr[MAX_ARR];
	int i;

	// La variabile intera i rappresenta il contatore, nel caso specifico posto
	// uguale a 0; si inizializza un array di MAX_ARR elementi con il valore del
	// contatore i.

	for (i = 0; i <MAX_ARR; i++) {
		int_arr[i] = i;
		cout << int_arr[i] << " " ;
	}

	cout << "\nCiclo for con vector" << endl;

	vector<int> int_vect(int_arr, int_arr + MAX_ARR);
	vector<int>::iterator it = int_vect.begin();

	// Si cicla fino all'ultimo ell'elemento del vector mediante un iteratore,
	// dopodiche' si inizializzano gli elementi. Da notare che se non serve 
	// l'inizializzazione (init) puo' essere omessa.
	
	for (  ; it != int_vect.end(); ++it)
		cout << (*it += *it) << " " ;

	// Attenzione, una variabile definita nella condizione del ciclo for ha
	// ambito di visibilita' limitato al for stesso.

	return(0);
}

