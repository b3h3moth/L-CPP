#include <iostream>
#include "Linux.h"
using namespace std;

int main() {

    Linux test("BSD", "OpenBSD");
    Linux test2;
    Linux test3;
    
    test.print();
    test2.print();

    /* Il costruttore di copia e' un costruttore particolare che viene 
    invocato quando un nuovo ogetto e' istanziato ed inizializzato con un altro
    oggetto; in questo caso viene utilizzato l'operatore di assegnamento '=' che
    assegna i dati di un oggetto a un altro oggetto, vi e' una copia membro a
    membro degli attributi, ovvero i dati membro privati. */
    test2 = test;

    test.print();
    test2.print();

    test = test2 = test3;
    test.print();
    test2.print();
    test3.print();

    return(0);
}
