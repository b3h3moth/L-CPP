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

    cout << "stack vuoto " << endl;

    return(EXIT_SUCCESS);
}
