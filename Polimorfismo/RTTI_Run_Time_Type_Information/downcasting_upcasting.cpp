#include <iostream>
#include <cstdlib>
using namespace std;

/* UPCASTING
il cating da un tipo discendente a un tipo ascendente,
poiche' si risale nella gerarchia della classe.

Classe base A - Classe derivata B
A obj1 - B obj2

obj1 = obj2; e' sicuro, ma si deve fare attenzione allo "Slicing Problem".

DOWNCASTING
il casting da un tipo ascendente ad un tipo discendente,
poiche' si scendere la gerarchia della classe.

Animale *panimale;
panimale = new Cane;
Cane *pcane = dynamic_cast<Cane*>(panimale); 
.
*/
int main() {
    return(EXIT_SUCCESS);
}
