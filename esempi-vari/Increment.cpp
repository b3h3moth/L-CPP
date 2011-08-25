#include <iostream>
using namespace std;
#include "Increment.h"

// Costruttore di default
//
// Gli inizializzatori sono separati dai parametri da ':'
// Ciascun inizializzatore e' costituito dal nome del dato membro seguito
// tra parentesi dal valore da assegnare
//
// Questo metodo serve per inizializzare dati membro const

Increment::Increment(int c, int i) 
	: count(c), 
	increment(i)
{
	// vuoto
}
		
void Increment::print() const
{
	cout << "count = " << count << "increment = " << increment << endl;
}
