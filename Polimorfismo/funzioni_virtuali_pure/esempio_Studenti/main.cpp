#include <iostream>
#include <cstdlib>
using namespace std;

#include "ComputerScienceStudent.h"

int main(void)
{
    ComputerScienceStudent studente("Richard Stallman", "GNU7895", 1997);

    // Si salvano le ore relative alle diverse materie
    studente.setMathHours(12);
    studente.setCSHours(20);
    studente.setGenHours(40);

    // Numero di ore rimanenti
    cout << "Allo studente " << studente.getName() << " rimangono "
         << studente.getRemainingHours() << " ore, per laurearsi." << endl;

    return(EXIT_SUCCESS);
}
