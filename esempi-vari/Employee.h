#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "Date.h"

class Employee
{
	// const char * const dato
	// si legge: dato è un puntatore costante a un tipo di dato char costante
	public:
		Employee(const char * const first, const char * const last, 
				const Date &dateOfBirth, const Date &dateOfHire);
		void print() const;
		~Employee();

	private:
		char *firstName;
		char *lastName;
		const Date birthDate;
		const Date hireDate;
};

#endif
