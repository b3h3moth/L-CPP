#include <iostream>
using namespace std;

int main() {
	// L'istruzione piu' semplice che puo' essere realizzata e' una istruzione
	// vuota, che corrisponde al semplice punto e virgola.
	
	;

	// L'istruzione e' l'unità piu' piccola di un programma C++, ciascuna
	// istruzione termina con il punto e virgola finale; da notare tuttavia che,
	// per cio' che concerne le istruzioni composte, non e' necessario inserire
	// il punto e virgola dopo la graffa di chiusura.

	// ISTRUZIONE SEMPLICE
	// Consiste in una sola istruzione
	
	int val_int = 10;	// Istruzione di dichiarazione
	val_int;			// Istruzione espressione
	val_int += 10;		// Istruzione di assegnamento

	// ISTRUZIONE COMPOSTA
	// E' caratterizzata da una sequenza di istruzioni semplici racchiuse tra
	// parentesi graffe, nel caso specifico e' formata da una dichiarazione e 
	// da un assegnamento; una istruzione composta che contiene piu' di una
	// istruzione di dichiarazione e' detta anche blocco di istruzioni o piu'
	// semplicemente blocco. 
	
	if (val_int > 0)
	{
		int val_int_b = val_int;
		val_int = 20;
	}

	// Un blocco di istruzioni gode di una proprio campo d'azione, per cui le
	// variabili dichiarate al suo interno sono visibili soltanto all'interno
	// del blocco stesso.

	// Le istruzioni composte possono essere inserite in qualsiasi punto del 
	// programma, cosi' come le istruzioni semplici; anche con le istruzioni
	// composte e' ammissibile realizzare una istruzione nulla
	
	{}

	// A che scopo utilizzare una istruzione nulla, sia essa semplice o
	// composta? E' utile soprattutto allorquando la sintassi del programma la
	// richiede anche se logicamente se ne potrebbe fare a meno.
	// Di seguito si calcola la lunghezza di una stringa utilizzando una
	// istruzione nulla semplice.
	const char str[] = "c++ language programming";
	const char *p = str;
	int len;

	while (*p++)
		;

	// Da notare la conversione automatica dei due char in intero
	len = p - str;
	
	cout << "strlen(len): " << len << endl;
	
	return(0);
}
