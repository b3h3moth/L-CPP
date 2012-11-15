#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

#include "CommissionEmployee.h"
#include "CommissionEmployeePlus.h"

int main() {
    // Si crea un oggetto della classe base
    CommissionEmployee obj_base("John","Doe","123-45-678",1000,.06);

    // Si crea un puntatore alla classe base
    CommissionEmployee *ptr_obj_base = 0;

    // Si crea un oggetto della classe derivata
    CommissionEmployeePlus obj_der("Frank","Smith","098-76-543",.04,300);

    // Si crea un puntatore alla classe derivata
    CommissionEmployeePlus *ptr_obj_der = 0;

    cout << fixed << setprecision(2);

    cout << "Stampa gli oggetti della classe base e derivata:\n" << endl;
    obj_base.print();
    cout << "\n" << endl;
    obj_der.print();

    /* Assegna l'indirizzo di un oggetto della classe base ad un puntatore alla
    classe base, dopodiche' mediante tale puntatore si invoca la funzione 
    print() per la stampa a video */
    ptr_obj_base = &obj_base;
    cout << "\n" << endl;
    ptr_obj_base->print();

    /* Assegna l'indirizzo di un oggetto della classe derivata ad un puntatore 
    alla classe derivata */
    ptr_obj_der = &obj_der;
    cout << "\n" << endl;
    ptr_obj_der->print();

    /* Assegna l'indirizzo di un oggetto della classe derivata ad un puntatore 
    alla classe base.
   
    Ovviamente questo e' il caso piu' interessante, risulta chiaro che un
    oggetto della classe derivata "e' un" oggetto della classe base; la funzione
    invocata peraltro  e' quella della classe base, questo perche' la classe
    derivata ha ereditato tutte le funzioni pubbliche della classe base. */

    ptr_obj_base = &obj_der;
    cout << "\n" << endl;
    ptr_obj_base->print();
   
    /* Se si facesse l'opposto, ossia se si assegnasse ad un puntatore della 
    classe derivata l'indirizzo di un oggetto della classe base, si incorrerebbe
    in un errore, poiche' un oggetto della classe base "non e'" un oggetto della
    classe derivata:
    
    ptr_obj_der = &obj_base;
    
    invalid conversion from 'CommissionEmployee*' to 'CommissionEmployeePlus*'
    
    Mediante un puntatore alla classe base e' possibile invocare soltanto
    funzioni della classe base, per cui, se ad un puntatore alla classe base 
    dovesse essere assegnato un oggetto della classe derivata e, mediante esso,
    si tentasse di invocare una funzione della classe derivata, si incorrerebbe
    in un errore:

    ptr_obj_base->getBaseSalary();
    
    'class CommissionEmployee' has no member named 'getBaseSalary'
    */

    return(EXIT_SUCCESS);
}
