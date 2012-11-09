#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

#include "CommissionEmployee.h"
#include "CommissionEmployeePlus.h"

int main() {
    // Istanzia un oggetto della classe derivata
    CommissionEmployeePlus impiegato2("frank", "ross", "6785678", 
            5000, .04, 300);

    cout << fixed << setprecision(2);

    cout << "Info impiegato ottenute mediante funzioni accessor 'get': \n"
         << "       Nome: " << impiegato2.getFirstName()
         << "\n    Cognome: " << impiegato2.getLastName()
         << "\n SSN (INPS): " << impiegato2.getSSN()
         << "\n  Fatturato: " << impiegato2.getGrossSales()
         << "\nPercentuale: " << impiegato2.getCommissionRate()
         << "\n      Fisso: " << impiegato2.getBaseSalary() << endl;

    // Imposta lo stipendio fisso mensile
    impiegato2.setBaseSalary(1000);

    cout << "\nInfo impiegato ottenute mediante funzione print() : \n" << endl;

    impiegato2.print();
    cout << "\n\nguadagno impiegato: $" << impiegato2.earnings();

    return(EXIT_SUCCESS);
}
