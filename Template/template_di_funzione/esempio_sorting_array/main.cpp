#include <iostream>
#include <cstdlib>
using namespace std;

#include "sort.cpp"

/* Utilizzo dei template di funzione per l'implementazione di una versione
generica dell'algoritmo selection sort. */

template<class T>
void sort(T a[], int numberUsed);

template<class T>
void swapValues(T& variable1, T& variable2);

template<class T>
int indexOfSmallest(const T a[], int startIndex, int numberUsed);

int main(void) {
    int i;
    int a[10] = {9, 8, 7, 6, 5, 1, 2, 3, 0, 4};
    double b[5] = {5.5, 4.4, 1.1, 3.3, 2.2};
    char c[7] = {'G', 'E', 'N', 'E', 'R', 'I', 'C'};

    cout << "Valori di tipo 'integer' non ordinati: ";
        for (i = 0; i < 10; i++)
            cout << a[i] << " ";
    cout << endl;
    sort(a, 10);
    
    cout << "    Valori di tipo 'integer' ordinati: ";
    for (i = 0; i < 10; i++)
        cout << a[i] << " ";
    cout << endl;
    
    cout << " Valori di tipo 'double' non ordinati: ";
    for (i = 0; i < 5; i++)
        cout << b[i] << " ";
    cout << endl;
    sort(b, 5);

    cout << "     Valori di tipo 'double' ordinati: ";
    for (i = 0; i < 5; i++)
        cout << b[i] << " ";
    cout << endl;

    cout << "   Valori di tipo 'char' non ordinati: ";
    for (i = 0; i < 7; i++)
        cout << c[i] << " ";
    cout << endl;
    sort(c, 7);

    cout << "       Valori di tipo 'char' ordinati: ";
    for (i = 0; i < 7; i++)
        cout << c[i] << " ";
    cout << endl;

    return(EXIT_SUCCESS);
}
