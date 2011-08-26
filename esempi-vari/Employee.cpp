#include <iostream>
#include <cstring>
using namespace std;

#include "Employee.h"
#include "Date.h"

// Il costruttore della classe Employee utilizza, in particolare, due
// inizializzatori, per passare i valori iniziali ai costruttori degli oggetti
// dateOfBirth e dateOfHire. Si noti che entrambi sono oggetti della classe Date
Employee::Employee(const char * const first, const char * const last, 
		const Date &dateOfBirth, const Date &dateOfHire)
: birthDate(dateOfBirth),
	hireDate(dateOfHire)
{
	// Copia di first in firstName e verifica lunghezza
	int length = strlen(first);
	length = (length < 25 ? length : 24);
	strncpy(firstName, first, length);
	firstName[length] = '\0';

	// Copia di last in lastName e verifica lunghezza
	length = strlen(last);
	length = (length < 25 ? length : 24);
	strncpy(lastName, last, length);
	lastName[length] = '\0';

	// Mostra la chiamata del costruttore
	cout << "Employee object constructor: " << firstName << ' ' << lastName 
		<< endl;
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
	cout << "Employee object destructor: " << lastName << ", " << firstName 
		<< endl;
}
