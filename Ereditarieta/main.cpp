#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

#include "CommissionEmployee.h"

int main() {
    CommissionEmployee impiegato("liuc", "stack","12337813", 100, .04);
    impiegato.print();

    cout << "\n\nguadagno impiegato: $" << impiegato.earnings();

    return(EXIT_SUCCESS);
}
