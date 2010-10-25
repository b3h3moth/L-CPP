#include <iostream>
using namespace std;

int main() {
	/* ESPRESSIONI
	 *
	 * Un espressione, solitamente, e' caratterizata da uno o piu' operandi e
	 * una operazione da applicare agli operandi stessi.
	 *
	 * Gli Operatori che agiscono su un operando sono detti unari
	 * Gli Operatori che agiscono su due operandi sono detti binari
	 *
	 * L'operatore di indirizzo ad esempio e' un operatore unario, l'operatore
	 * somma invece e' binario, da notare inoltre che alcuni di essi possono
	 * essere sia unari sia binari, come l'operatore di derefernziazione '*',
	 * che e' anche operatore di moltiplicazione.
	 * 
	 * La valutazione di una espressione passa attraverso l'esecuzione di una o
	 * piu' espressioni che a loro volta portano ad un risultato, tipicamente un
	 * rvalue.
	 *
	 */
	int *ptr;			// Operatore di derefernziazione Puntatore
	int var1 = 5 * 8;	// Operatore di moliplicazione
	ptr = &var1;		// Operatore di indirizzo;

	if (var1 != 0 && *ptr != 0)	// Espressione composta, quando due o piu' 
		;						// operatori sono combinati
		

   return(0);
}

