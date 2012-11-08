#include <iostream>
using namespace std;

#include "CommissionEmployee.h"

// Il costruttore
CommissionEmployee::CommissionEmployee(const string &first, const string &last,
        const string &ssn, double sales, double rate)
{
    first_name = first;
    last_name = last;
    social_security_number = ssn;
    
    setGrossSales(sales);
    setCommissionRate(rate);
}

void CommissionEmployee::setFirstName(const string &first)
{
    first_name = first;
}

string CommissionEmployee::getFirstName() const
{
    return first_name;
}

void CommissionEmployee::setLastName(const string &last)
{
    last_name = last;
}

string CommissionEmployee::getLastName() const
{
    return last_name;
}

// Imposta il numero INPS (per cio' concerne il sistema Italiano)
void CommissionEmployee::setSSN(const string &ssn)
{
    social_security_number = ssn;
}

string CommissionEmployee::getSSN() const
{
    return social_security_number;
}

// Imposta il totale delle vendite
void CommissionEmployee::setGrossSales(double sales)
{
    gross_sales = (sales < 0.0) ? 0.0 : sales;
}

double CommissionEmployee::getGrossSales() const
{
    return gross_sales;
}

// Imposta la percentuale sulle vendite
void CommissionEmployee::setCommissionRate(double rate)
{
    commission_rate = (rate > 0.0 && rate < 1.0) ? rate : 0.0;
}

double CommissionEmployee::getCommissionRate() const
{
    return commission_rate;
}

// calcola la retribuzione, ossia i ricavi di un agente di vendita
double CommissionEmployee::earnings() const
{
    return commission_rate * gross_sales;
}

// Stampa i dati dell'agente
void CommissionEmployee::print() const
{
    cout << "  Agente di vendita: " << first_name << ' ' << last_name
         << "\n  SSN (numero INPS): " << social_security_number
         << "\n          Fatturato: " << gross_sales
         << "\nPercentuale vendite: " << commission_rate;
}
