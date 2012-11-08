#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

#include "CommissionEmployee.h"
#include "CommissionEmployeePlus.h"

int main() {
    CommissionEmployee impiegato("liuc", "stack","12337813", 100, .04);
    impiegato.print();

    cout << "\n\nguadagno impiegato: $" << impiegato.earnings();

    CommissionEmployeePlus impiegato2("frank", "ross", "6785678", 
            5000, .04, 300);

    impiegato2.print();
    cout << "\n\nguadagno impiegato: $" << impiegato2.earnings();

    return(EXIT_SUCCESS);
}
