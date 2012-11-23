#include <iostream>
using std::cout;

#include "SalariedEmployee.h"

// Costruttore
SalariedEmployee::SalariedEmployee( const string &first, const string &last, 
        const string &ssn, double salary ) : Employee( first, last, ssn )
{
    setWeeklySalary( salary ); 
}

// Setta lo stipendio fisso settimanale
void SalariedEmployee::setWeeklySalary( double salary )
{ 
    weeklySalary = ( salary < 0.0 ) ? 0.0 : salary; 
}

// Restituisce lo stipendio fisso settimanale
double SalariedEmployee::getWeeklySalary() const
{
    return weeklySalary;
}

/* Override della funzione virtuale pura della classe base Employee
Calcola la rettribuzione */
double SalariedEmployee::earnings() const 
{ 
    return getWeeklySalary(); 
}

/* Override della funzione virtuale della classe base Employee
Stampa informazioni sul dipendente */
void SalariedEmployee::print() const
{
   cout << "Impiegato salariato: ";
   Employee::print();
   cout << "\nsalario settimanale: " << getWeeklySalary();
} 
