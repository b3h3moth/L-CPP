#include <iostream>
#include <cstdlib>
using namespace std;

// Definizione del template di funzione
template<typename T>
void stampaArray(const T *array, int count)
{
    for (int i = 0; i<count; i++)
        cout << array[i] << " ";

    cout << endl;
}

int main() {
    const int dim1 = 10;   // Dimensione array 1
    const int dim2 = 12;   // Dimensione array 2
    const int dim3 = 13;   // Dimensione array 3

    int arr1[dim1] = {1,2,3,4,5,6,7,8,9,10};
    float arr2[dim2] = {1.1,2.2,3.3,4.4,5.5,6.6,7.7,8.8,9.9,10.10,11.11,12.12};
    char arr3[dim3] = "C++ Template";

    // Invoca la specializzazione 'int' del template
    stampaArray(arr1, dim1);
    
    // Invoca la specializzazione 'float' del template
    stampaArray(arr2, dim2);
    
    // Invoca la specializzazione 'char' del template
    stampaArray(arr3, dim3);

    /* Allorquando il compilatore incontra una chiamata alla funzione
    stampaArray() verifica il tipo di dato del parametro formale T e lo 
    sostituisce di volta in volta con il tipo di dato adatto, ovvero int, float
    e char; il compilatore crea un'istanza del template di funzione 
    stampaArray() ad  ogni invocazione. */

    return(EXIT_SUCCESS);
}
