#include <iostream>
#include <cstdlib>
using namespace std;

#include "Stack.h"

int main() {
    // Si realizza uno stack di tipo intero mediante il costruttore di default
    Stack<int> int_stack;
    int elem_int = 1;

    cout << "Inserimento elemento di tipo intero nello stack" << endl;

    // Inserisce gli elementi nello stack
    while (int_stack.push(elem_int)) {
        cout << elem_int << ' ';
        elem_int += 1;
    }

    cout << "Stack pieno, push(" << elem_int << ") non eseguibile" << endl;

    // Estrae gli elementi dallo stack
    while (int_stack.pop(elem_int))
        cout << elem_int << ' ';

    cout << "stack vuoto\n" << endl;

    Stack<double> dbl_stack(10);
    double elem_dbl = 1.1;

    cout << "Inserimento elemento di tipo double nello stack" << endl;

    // Inserisce gli elementi nello stack
    while (dbl_stack.push(elem_dbl)) {
        cout << elem_dbl << ' ';
        elem_dbl++;
    }

    cout << "Stack pieno, push(" << elem_dbl << ") non eseguibile" << endl;

    // Estrae gli elementi dallo stack
    while (dbl_stack.pop(elem_dbl))
        cout << elem_dbl << ' ';

    cout << "stack vuoto " << endl;
    return(EXIT_SUCCESS);
}
