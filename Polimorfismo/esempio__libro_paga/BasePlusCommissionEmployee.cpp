#include <iostream>
using std::cout;

#include "BasePlusCommissionEmployee.h"

// Costruttore
BasePlusCommissionEmployee::BasePlusCommissionEmployee(
        const string &first, const string &last, const string &ssn,
        double sales, double rate, double salary )
: CommissionEmployee( first, last, ssn, sales, rate )  
{
    setBaseSalary( salary ); 
}

// Imposta il salario fisso settimanale
void BasePlusCommissionEmployee::setBaseSalary( double salary )
{ 
    baseSalary = ( ( salary < 0.0 ) ? 0.0 : salary ); 
}

// Restituisce il salario fisso settimanale
double BasePlusCommissionEmployee::getBaseSalary() const
{
    return baseSalary; 
}

/* Override della funzione virtuale pura della classe Employee
Calcola la retribuzione */
double BasePlusCommissionEmployee::earnings() const
{ 
    return getBaseSalary() + CommissionEmployee::earnings(); 
}

/* Override della funzione virtuale pura della classe Employee
Stampa informazioni sull'impiegato */
void BasePlusCommissionEmployee::print() const
{
    cout << "salarato di base ";
    CommissionEmployee::print();
    cout << "; salario di base: " << getBaseSalary();
}
