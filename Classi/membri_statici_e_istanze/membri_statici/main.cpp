#include <iostream>
using namespace std;

#include "Employee.h"

/* MEMBRI STATIC
-------------------------------------------------------------------------------
Un dato membro static consente di avere una sola copia del dato membro per
ciascuna istanza della classe. Possono essere:
- public;
- private;
- protected.

Un tipo fondamentale viene automaticamente inizializzato a 0; dati e funzioni
membro static di una classe sono indipendenti dalle istanze di una classe, per
cui esistono anche se non è stato istanziato alcun oggetto.

Una funzione membro static non ha il puntatore this, ovviamente.

Le funzioni membro static possono accedere soltanto ai dati membro static della
classe.
*/

int main() {
    /* Oltre ad essere static e' anche public, per cui si puo' accedere a
    dati e funzioni membro static anche prima dell'istanziazione di un
    oggetto; naturalmente e' necessario l'operatore di risoluzione di scope. */
    cout << "Tot. impiegati prima dell'istanziazione: " << 
    	Employee::getCount() << endl;
    
   Employee *nuovo1 = new Employee("franco", "franchi");
   Employee *nuovo2 = new Employee("ciccio", "ingrassia");

    cout << "Tot. impiegati dopo l'istanziazione: " << 
    	nuovo1->getCount() << endl;

    cout << "Impiegato: " << nuovo1->getFirstName() << " " << 
    	nuovo1->getLastName() << endl;
    cout << "Impiegato: " << nuovo2->getFirstName() << " " << 
    	nuovo2->getLastName() << endl;

    delete nuovo1;
    delete nuovo2;

    /* E' consigliabile accedere alle funzioni membro static di una classe
    mediante il nome della classe stessa e non per mezzo di un oggetto. */
    cout << "Tot. impiegati dolo l'eliminazione: " << 
    	Employee::getCount() << endl;

    return(0);
}
