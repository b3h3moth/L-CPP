#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

#include "Employee.h"
#include "Count.h"
#include "Budget.h"

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

    // Classe Count
    cout << "\nClasse Count" << endl;
    
    /* Ad ogni nuova istanza della classe Count, il valore di count_obj sara'
    aumentato di una unita'. */
    Count obj1;
    cout << "count_obj: " << obj1.getObjCount() << endl;
    
    Count obj2;
    cout << "count_obj: " << obj2.getObjCount() << endl;
    
    Count obj3;
    cout << "count_obj: " << obj3.getObjCount() << endl;

    /* Per concludere, il concetto espresso in questo esempio e' il seguente;
    sebbene vi sono ben tre istanze della classe Count, ossia obj1, obj2 e obj3,
    c'e' solo una copia della variabile membro statica count_obj. */

    // Classe Budget
    cout << "\nClasse Budget" << endl;

    const int TOT_DIVIONS = 3;
    Budget divisions[TOT_DIVIONS];

    // Richiesta budget per ciascuna divisione
    for (int i = 0; i<TOT_DIVIONS; i++) {
        double budget_amount;
        cout << "Inserire budget per la divisione '" << i+1 << "' : ";
        cin >> budget_amount;
        divisions[i].addBudget(budget_amount);
    }

    cout << fixed << showpoint << setprecision(2);
    cout << "\nRichiesta budget delle visioni:\n";
    for (int i = 0; i<TOT_DIVIONS; i++) {
        cout << " divisione " << i+1 << "$ ";
        cout << divisions[i].getDivisionBudget() << endl;
    }

    cout << "Richiesta totale di budget: $ ";
    cout << divisions[0].getCompanyBudget() << endl;

    return(EXIT_SUCCESS);
}
