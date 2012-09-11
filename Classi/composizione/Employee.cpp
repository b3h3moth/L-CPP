#include <iostream>
#include <cstring>
using namespace std;

#include "Employee.h"
#include "Date.h"

/* Il costruttore della classe Employee utilizza, in particolare, due
inizializzatori, per passare i valori iniziali ai costruttori degli oggetti
dateOfBirth e dateOfHire. Si noti che entrambi sono oggetti della classe Date.

La composizione consente di utilizzare oggetti di altre classi nella creazione
di nuove classi, caratteristica peculiare della programmazione ad oggetti.
*/

Employee::Employee(const char * const first, const char * const last, 
	const Date &dateOfBirth, const Date &dateOfHire)
        : birthDate(dateOfBirth), hireDate(dateOfHire)
{
    firstName = new char[strlen(first)+1];
    strcpy(firstName, first);
    
    lastName = new char[strlen(last)+1];
    strcpy(lastName, last);
    
    // Mostra la chiamata del costruttore
    cout << "Employee object constructor: " << firstName << ' ' 
    	 << lastName << endl;
}

void Employee::print() const
{
    cout << lastName << ", " << firstName << " Hired: ";
    hireDate.print();
    cout << "  Birthday: ";
    birthDate.print();
    cout << endl;
}

// Moostra la chiamata del distruttore
Employee::~Employee()
{
    cout << "Employee object destructor: " << lastName << ", " 
    	<< firstName << endl;
}
