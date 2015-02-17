#include <iostream>
using namespace std;

// Si include soltanto il file di intestazione della classe proxy.
#include "Interface.h"

int main() {
    Interface ogg(10);
    ogg.setValue(20);
    cout << ogg.getValue() << endl;
    
    return(0);
}
