#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

/* L'header iomanip include diversi tool, tra cui setw() che definisce
la lunghezza minima di un campo */

int main() {
    cout << " N    N^2    N^3\n" << endl;

    for (int i=1; i<10; i++) {
        cout << setw(2) << i
             << setw(6) << i*i
             << setw(7) << i*i*i << endl;
    }

    return(EXIT_SUCCESS);
}
