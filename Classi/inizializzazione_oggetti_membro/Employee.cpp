#include <iostream>
#include <cstring>
using namespace std;

#include "Employee.h"
#include "Date.h"

/* 
La composizione consente di utilizzare oggetti di altre classi nella creazione
di nuove classi, caratteristica peculiare della programmazione ad oggetti.

Gli ultimi due parametri del costruttore della classe Employee sono due
oggetti costanti della classe Date, dateOfBirth e dateOfHire, per inizializzarli
occorre passarli al costruttore della classe stessa.

Gli inizializzatori indicano gli argomenti di Employee da passare ai costruttori
degli oggetti membro (subito dopo il simbolo ':')
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
