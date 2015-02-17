#include <iostream>
using namespace std;
#include "Increment.h"

/* 
Inizializzazione dei dati membro const.

Gli inizializzatori sono separati dai parametri dal segno ':'; ciascun 
inizializzatore e' costituito dal nome del dato membro seguito, tra 
parentesi, dal valore da assegnare al dato membro stesso.
*/

// Lista di inizializzatori
Increment::Increment(int c, int i) : count(c), increment(i)
{
    /* Si opera con l'inizializzazione perchè un attributo costante non puo'
    essere inizializzato nel modo classico:
    count = c;
    increment = i;

    Perchè un oggetto const non può essere modificato mediante assegnamento.
    */
}
		
void Increment::print() const
{
    cout << "count = " << count << " increment = " << increment << endl;
}
