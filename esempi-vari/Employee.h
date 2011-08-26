#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "Date.h"

class Employee
{
	public:
		Employee(const char * const first, const char * const last, 
				const Date &dateOfBirth, const Date &dateOfHire);
		void print() const;
		~Employee();

	private:
		char firstName[25];
		char lastName[25];
		const Date birthDate;
		const Date hireDate;
};

#endif
