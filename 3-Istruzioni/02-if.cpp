#include <iostream>
using namespace std;

int main() {

	// L'istruzione if, in base alla verita' di una espressione logica, consente
	// l'esecuzione condizionale di una istruzione o di un blocco di istruzioni;
	// la sintassi e' la seguente:
	//
	// if ( condizione )
	//      istruzione/i;
	//
	// - La condizione deve essere sempre racchiusa tra parentesi tonde;
	// - La condizione puo' essere una espressione if (x + y > N);
	// - La condizione puo' essere una dichiarazione if ( val = get_value() );
	// - L'oggetto o gli oggetti definiti all'interno della condizione hanno il
	// loro campo di azione e pertanto sono visibili solo all'interno del blocco
	// associato;
	
	if ( int valore = 10 > 0)
		cout << true << endl;
	// valore++; tale istruzione e' un errore, poiche' lo scope e' limitato 
	// all'ambito del blocco if
	
	
	
	return(0);
}
