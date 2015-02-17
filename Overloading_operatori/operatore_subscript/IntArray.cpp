#include <iostream>
#include <cstdlib>
using namespace std;

#include "IntArray.h"

// Costruttore
IntArray::IntArray(int s)
{
    array_size = s;     // La lunghezza dell'array
    ptr = new int[s];   // Si alloca la memoria per l'array

    // Ciascun membro dell'array viene inizializzato a 0
    for (int i=0; i<array_size; i++)
        ptr[i] = 0;
        // Equivalente a:  *(ptr + i) = 0;
}

/* Costruttore di copia; 
Utilizzato quando un oggetto viene inizializzato con un altro oggetto */
IntArray::IntArray(const IntArray &obj)
{
    array_size = obj.array_size;
    ptr = new int[array_size];
    for(int i=0; i<array_size; i++)
        ptr[i] = obj.ptr[i];
        // Equivalente a: *(ptr + i) = *(obj.ptr + i);
}

/* Distruttore:
Rilascia la memoria dell'array */
IntArray::~IntArray()
{
    if (array_size > 0)
        delete [] ptr;
}

// Funzione di supporto in caso di errore dell'operatore di subscript []
void IntArray::subscriptError(int n)
{
    cout << "Err: '" << n << "' subscript fuori limite: " << size() << endl;
    exit(0);
}

// Ridefinizione dell'operatore subscript []
int &IntArray::operator[](const int &sub)
{
    // Si verifica che l'indice dell'array non "sfori" i limiti dell'array
    if (sub < 0 || sub > array_size)
        subscriptError(sub);

    return ptr[sub];
}
