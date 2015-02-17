#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

/* L'header iomanip include diversi tool, tra cui setfill() che si occupa di
riempire con un carattere specifico gli spazi vuoti */

int main() {
    cout << " N    N^2    N^3\n" << endl;

    for (int i=1; i<10; i++) {
        cout << setfill('X') << setw(2) << i
             << setfill('_') << setw(6) << i*i
             << setfill('-') << setw(7) << i*i*i << endl;
    }

    return(EXIT_SUCCESS);
}
