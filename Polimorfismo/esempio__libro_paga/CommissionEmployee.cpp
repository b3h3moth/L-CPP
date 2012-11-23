#include <iostream>
using std::cout;

#include "CommissionEmployee.h"

// Costruttore
CommissionEmployee::CommissionEmployee( const string &first, const string &last,
        const string &ssn, double sales, double rate ) 
: Employee( first, last, ssn )  
{
    setGrossSales( sales );
    setCommissionRate( rate );
}

// Imposta percentuale vendite
void CommissionEmployee::setCommissionRate( double rate )
{ 
    commissionRate = ( ( rate > 0.0 && rate < 1.0 ) ? rate : 0.0 );
}

// Restituisce percentuale vendite
double CommissionEmployee::getCommissionRate() const
{
    return commissionRate;
}

// Imposta il totale delle vendite
void CommissionEmployee::setGrossSales( double sales ) 
{ 
    grossSales = ( ( sales < 0.0 ) ? 0.0 : sales ); 
}

// Restituisce il totale delle vendite
double CommissionEmployee::getGrossSales() const
{
    return grossSales;
}

/* Override della funzione virtuale pura della classe base Employee
Calcola la retribuzione */
double CommissionEmployee::earnings() const
{ 
    return getCommissionRate() * getGrossSales(); 
}

/* Override della funzione virtuale pura della classe base Employee
Stampa informazioni sull'impiegato */
void CommissionEmployee::print() const
{
   cout << "  Agente di vendita: ";
   Employee::print();
   cout << "          \nFatturato: " << getGrossSales() 
      << "; percentuale vendite: " << getCommissionRate();
} 
