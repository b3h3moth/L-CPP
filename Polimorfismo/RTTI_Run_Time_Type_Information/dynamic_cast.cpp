#include <iostream>
#include <cstdlib>
using namespace std;

/* RTTI (Run-Time Type Identification, Identificazione dei tipi a tempo di 
esecuzione), consente a programmi che manipolano oggetti come puntatori o 
riferimenti a classi base, di determinare l'effettivo tipo derivato a cui essi
si riferiscono.

dynamic_cast, consente la conversione di un puntatore ad una classe base in un
puntatore ad una classe derivata, oppure un lvalue che si riferisce ad una 
classe base in un riferimento a una classe derivata; affinche' le informazioni
sul tipo della classe derivata possano essere rilevate, e' necessario che
l'operando di dynamic_cast dev'essere una classe con una o piu' funzioni
virtuali.

Nota: La conversione di un puntatore a una classe base in un puntatore a una
      classe derivata e' detto "safe downcasting".
*/

int main() {
    return(EXIT_SUCCESS);
}
