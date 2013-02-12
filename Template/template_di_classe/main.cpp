#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

#include "SearchVector.h"

int main() {
    const int SIZE = 10;        // Numero di elementi
    int i;

    /* Si crea l'oggetto array_int, nel caso specifico un array di interi,
    <int> e' il tipo di dato che il template usera' al posto di T */
    SimpleVector<int> array_int(SIZE);
    SimpleVector<float> array_flt(SIZE);
    SimpleVector<double> array_dbl(SIZE);

    // Inizializzazione di ciascun array
    for (i=0; i<SIZE; i++) {
        array_int[i] = i * i;
        array_flt[i] = i * 2.1;
        array_dbl[i] = i * 3.1;
    }

    cout << setw(6) << "interi" << setw(6) << "float" << setw(7) << "double" 
         << endl;
    
    for (i=0; i<SIZE; i++) {
        cout << setw(6) << array_int[i] << setw(6) << array_flt[i] << setw(7)  
             << array_dbl[i] << endl;
    }

    cout << endl;

    SearchVector<int> src_array_int(SIZE);
    for (i=0; i<SIZE; i++) {
        src_array_int[i] = i * i;
    }

    for (i=0; i<SIZE; i++) {
       cout << setw(4) << src_array_int[i] << endl;
    }
    
    int result = src_array_int.findItem(16);
    
    if (result == -1)
        cout << "non trovato" << endl;
    else
        cout << "trovato" << " " << 16 << endl;

    return(EXIT_SUCCESS);
}
