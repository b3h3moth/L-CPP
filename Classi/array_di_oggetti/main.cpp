#include <iostream>
using namespace std;

#include "Debian.h"

int main() {
    const int MAX_LEN = 3;

    /* E' possibile definire array di oggetti di classi, nel caso specifico
    della classe Debian. */
    Debian arr[MAX_LEN];

    // Su ciascun oggetto dell'array sara' invocato il costruttore di default
    for (int i=0; i<MAX_LEN; i++)
        cout << "array[" << i << "] - " << arr[i].getStableDistro() 
             << " " << arr[i].getTestingDistro() << endl;

    return(0);
}
