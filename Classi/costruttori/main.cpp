#include <iostream>
#include "Unix.h"
using namespace std;

int main() {
    /* Quando un oggetto viene istanziato serza argomenti, il compilatore invoca
    automaticamente il costruttore di default, questo e' il motivo per il quale 
    una classe puo' avere un solo costruttore di default. */
    Unix obj;

    // Al nuovo oggetto venogono forniti due argomenti
    Unix obj2("OpenBSD", "5.1");
    obj.system_Info();

    /* La classe Unix prevede 3 attributi, all'oggetto tuttavia sono stati
    forniti sono due parametri, il terzo sara' fornito di un valore nullo. */
    obj2.system_Info();

    /* Si alloca un nuovo oggetto e lo si assegna ad un puntatore, su di esso 
    sara' invocato il costruttore di default */
    Unix *ptr = new Unix;
    ptr->system_Info();

    return(0);
}
