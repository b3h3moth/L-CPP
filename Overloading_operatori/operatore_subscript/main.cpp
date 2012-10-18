#include <iostream>
#include <cstdlib>
using namespace std;

#include "IntArray.h"

int main() {
    const int SIZE = 5;

    IntArray obj(SIZE);
    IntArray obj2(SIZE);

    for(int i=0; i<SIZE; i++)
        obj[i] = i + i;

    for(int i=0; i<SIZE; i++)
        cout << obj[i] << " ";
   
    cout << endl;

    for(int i=0; i<SIZE; i++)
        obj2[i]= i + i;

    /* In questo caso il limite sara' superato ed invocata la funzione
    ridefinita dell'operatore subscript */
    for(int i=0; i<SIZE; i++)
        cout << obj2[i+i] << " ";
    
    return(EXIT_SUCCESS);
}
