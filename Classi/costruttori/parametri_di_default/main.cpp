#include <iostream>
#include "Unix.h"
using namespace std;

int main() {
    /* Pur non essendoci il classico costruttore di default, il nuovo oggetto
    puo' essere creato semplicemente, senza l'ausilio di argomenti. */
    Unix linux_system;

    linux_system.system_Info();
    
    return(0);
}
