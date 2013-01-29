#include <iostream>
#include <cstdlib>
using namespace std;

#include "SimpleVector.h"

int main() {
    const int SIZE = 20;        // Numero di elementi
    int i;

    // Si crea un array di interi
    SimpleVector<int> array_int[SIZE];

    // Inizializza ciascun array
    for (i=0; i<SIZE; i++) {
        array_int[i] = i*i;
    }

    return(EXIT_SUCCESS);
}
