#include <iostream>
#include "Unix.h"
using namespace std;

int main() {
    /* Il costruttore viene eseguito automaticamente non appena l'oggetto viene 
    creato*/
    
    Unix obj;
    Unix obj2("OpenBSD", "5.1");
    obj.system_Info();
    obj2.system_Info();

    return(0);
}
