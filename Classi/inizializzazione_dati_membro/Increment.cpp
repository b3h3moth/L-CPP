#include <iostream>
using namespace std;
#include "Increment.h"

/* 
Gli inizializzatori sono separati dai parametri dal segno ':'

Ciascun inizializzatore e' costituito dal nome del dato membro seguito tra 
parentesi dal valore da assegnare; tale metodo serve per inizializzare dati 
membro const
*/

Increment::Increment(int c, int i) : count(c), increment(i)
{
    /* Si opera con l'inizializzazione perchè un attributo costante non puo'
    essere inizializzato nel modo classico:
    count = c;
    increment = i;
    */
}
		
void Increment::print() const
{
    cout << "count = " << count << " increment = " << increment << endl;
}
