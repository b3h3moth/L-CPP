#include <iostream>
#include <vector>
#include <ctype.h>

using namespace std;

#define MAX_ARR 15

int main() {

	// INTRODUZIONE ALLE ISTRUZIONI CICLO: FOR, WHILE, DO WHILE
	////////////////////////////////////////////////////////////////////////////
	// Nei programmi e' sovente utilizzare un insieme ripetuto di istruzioni
	// fintanto che talune condizioni restano logicamente vere (true); il
	// linguaggio C++ fornisce tre istruzioni di ciclo:
	// 
	// 1 - Il ciclo for;
	// 2 - Il ciclo while;
	// 3 - Il ciclo do while.
	//
	// Il ciclo for e il ciclo while iniziano l'esecuzione con una condizione
	// di partenza che determina se eseguire o meno l'istruzione o il blocco di
	// istruzioni contenute nel blocco del ciclo, qualora la condizione 
	// risultasse falsa l'istruzione o il blocco di istruzioni non sarebbe 
	// eseguito neanche una volta.
	//
	// Il ciclo do while invece garantisce che l'istruzione o il blocco di
	// istruzioni sia eseguito per lo meno una volta, poiche' la condizione e'
	// esaminata dopo l'esecuzione del ciclo stesso. Questa, e' una differenza
	// sostanziale e molto importante allorquando si dovra' decidere quale ciclo
	// utilizzare.
	
	
	// CICLO FOR
	////////////////////////////////////////////////////////////////////////////
	// E' pensato per esprimere cicli piuttosto regolari, e' adoperato infatti
	// per scandire una struttura dati di lunghezza fissa, quali possono essere
	// un array o un vector. La sintassi e' la seguente:
	//
	// for (inizializzazione; condizione; espressione)
	// 		istruzione
	// 
	// Logicamente dovrebbe produrre il seguente risultato: "inserire un
	// contatore, verificare una condizione, aggiornare il contatore".
	//
	// L'inizializzazione serve per fornire un valore iniziale che
	// successivamente sara' incrementato; la caratteristica della condizione
	// invece e' di lavorare sul controllo del ciclo, tale condizione se risulta
	// essere true consente l'esecuzione dell'istruzione o del blocco di 
	// istruzioni, qualora la condizione risultasse falsa, non sara' eseguita 
	// alcuna istruzione. Infine, l'espressione e' valutata alla conclusione di
	// ciascun ciclo, generalmente utilizzata per la modifica delle variabili
	// predisposte all'inizializzazione.

	cout << "Ciclo for con array" << endl;
	
	int int_arr[MAX_ARR], i;

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
	// l'inizializzazione puo' essere omessa.
	
	for (  ; it != int_vect.end(); ++it)
		cout << (*it += *it) << " " ;

	// Attenzione, una variabile definita nella condizione del ciclo for ha
	// ambito di visibilita' limitato al for stesso.

	// CICLO WHILE
	////////////////////////////////////////////////////////////////////////////
	// Il ciclo while e' particolarmente adatto ad eseguire istruzioni fino a
	// quando talune condizioni sono verificate, l'esempio classico e' la
	// lettura di un file fino a quando non si giunge alla fine del file
	// stesso.
	//
	// La sintassi del ciclo while e' la seguente:
	//
	// while (condizione)
	// 	istruzione
	//
	// Fintanto che la condizione risulta vera sara' eseguita l'istruzione o il
	// blocco di istruzioni, qualora invece la condizione risultasse falsa il 
	// ciclo non sara' eseguito neanche una volta.
	//
	// Un'istruzione while esegue semplicemente il corpo del ciclo, finche' la
	// condizione non diventa falsa, tecnicamente ed anche logicamente e' molto
	// piu' semplice di un ciclo for; le istruzioni while dovrebbero essere
	// preferite alle istruzioni for allorquando non esiste un contatore ovvio,
	// o quando l'aggiornamento del contatore viene naturale all'interno del
	// corpo del ciclo.
	// 
	// La condizione puo' essere sia una espressione sia una definizione di
	// inizializzazione.
	cout << "\n\nCiclo while" << endl;
	
	bool testing = false;
	char ch = '/';

	// In questo caso la condizione e' una espressione
	while (!testing) {
		cout << "\"!\" posto davanti ad una condizione ne esprime la negazione; " 
			    "e' necessario il break altrimenti il ciclo sarebbe infinito." << endl;
		break;
	}


	// In quest'altro caso invece la condizione e' una definizione di
	// inizializzazione. Il break non e' stato inserito poiche' la condizione
	// risulta falsa, poche' il carattere non e' un alfanumerico, come la 
	// condizione vorrebbe.
	while ( int valore = isalpha(ch)) {
		cout << ch << endl;
	}
	
	// CICLO DO WHILE
	////////////////////////////////////////////////////////////////////////////
	// Come accennato precedentemente il corpo del ciclo do while e' eseguito
	// per lo meno una volta prima della verifica della condizione, e questo
	// puo' essere causa di errori seri qualora il programmatore non faccia
	// attenzione.

	return(0);
}
