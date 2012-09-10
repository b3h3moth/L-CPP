#include <iostream>
#include "Linux.h"
using namespace std;

int main() {
    // Inizializzazione dell'oggetto al momento della creazine dello stesso
    Linux sys("Debian");
    cout << sys.getOS() << endl;
   
   return(0);
}
