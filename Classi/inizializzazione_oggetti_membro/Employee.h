#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "Date.h"

class Employee
{
    public:
    	// Costruttore
	Employee(const char * const first, const char * const last,
		 const Date &dateOfBirth, const Date &dateOfHire);
	
	void print() const;
	
	// Distruttore
	~Employee();
    
    private:
    	char *firstName;
	char *lastName;
	const Date birthDate;
	const Date hireDate;
};

#endif
