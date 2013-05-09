#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

/* L'header iomanip include diversi tool, tra cui left e right che allineano il
testo a destra o a sinistra */

int main() {

    cout << "|" << setfill('-') << setw(6) << 123 << "|" << endl;
    cout << "|" << left << setw(6) << 123 << "|" << endl;
    cout << "|" << right << setw(6) << 123 << "|" << endl;

    return(EXIT_SUCCESS);
}
