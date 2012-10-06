#include <iostream>
#include "Unix.h"
using namespace std;

int main() {
    /* Il costruttore e' eseguito automaticamente non appena l'oggetto viene 
    creato, in questo caso  e' stato invocato il costruttore di default. */
    Unix obj;

    // Al nuovo oggetto venogono forniti due argomenti
    Unix obj2("OpenBSD", "5.1");
    obj.system_Info();

    /* La classe Unix prevede 3 attributi, all'oggetto tuttavia sono stati
    forniti sono due parametri, il terzo sara' inizializzato con un valore di
    default. */
    obj2.system_Info();

    /* Si alloca un nuovo oggetto e lo si assegna ad un puntatore, su di esso 
    sara' invocato il costruttore di default */
    Unix *ptr = new Unix;
    ptr->system_Info();

    return(0);
}
