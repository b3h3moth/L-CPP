#include <iostream>
using namespace std;

#include "CommissionEmployeePlus.h"

// Il costruttore
CommissionEmployeePlus::CommissionEmployeePlus(const string &first, 
        const string &last, const string &ssn, double sales, double rate,
        double salary) : CommissionEmployee(first, last, ssn, sales, rate)
{
    setBaseSalary(salary);
}

void CommissionEmployeePlus::setBaseSalary(double salary)
{
    base_salary = (salary < 0.0) ? 0.0 : salary;
}

double CommissionEmployeePlus::getBaseSalary() const
{
    return base_salary;
}

// calcola la retribuzione, ossia i ricavi di un agente di vendita
double CommissionEmployeePlus::earnings() const
{
    return base_salary + (commission_rate * gross_sales);
}

// Stampa i dati dell'agente
void CommissionEmployeePlus::print() const
{
    cout << "  Agente di vendita: " << first_name << ' ' << last_name
         << "\n  SSN (numero INPS): " << social_security_number
         << "\n          Fatturato: " << gross_sales
         << "\nPercentuale vendite: " << commission_rate
         << "\n      Fisso mensile: " << base_salary << endl;
}
