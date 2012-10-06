#include <iostream>
#include "Unix.h"
using namespace std;

int main() {
    /* Il costruttore viene eseguito automaticamente non appena l'oggetto viene 
    creato, in questo caso viene invocato il costruttore di default. */
    Unix obj;

    // L'oggetto viene inizializzato mediante due stringhe
    Unix obj2("OpenBSD", "5.1");
    obj.system_Info();

    /* L'attributo non inizializzato sara' impostato ad una stringa nulla */ 
    obj2.system_Info();

    /* Si alloca un nuovo oggetto e lo si assegna ad un puntatore, su di esso 
    sara' invocato il costruttore di default */
    Unix *ptr = new Unix;
    ptr->system_Info();

    return(0);
}
