#include <iostream>
using std::cout;

#include "HourlyEmployee.h"

// Costruttore
HourlyEmployee::HourlyEmployee( const string &first, const string &last, 
        const string &ssn, double hourlyWage, double hoursWorked )
: Employee( first, last, ssn )   
{
    setWage( hourlyWage );
    setHours( hoursWorked );
}

// Imposta la paga oraria
void HourlyEmployee::setWage( double hourlyWage ) 
{ 
    wage = ( hourlyWage < 0.0 ? 0.0 : hourlyWage ); 
}

// Restituisce la paga oraria
double HourlyEmployee::getWage() const
{
    return wage;
}

// Imposta le ore di lavoro
void HourlyEmployee::setHours( double hoursWorked )
{
    hours=(((hoursWorked >= 0.0)&&(hoursWorked <= 168.0)) ? hoursWorked : 0.0);
}

// Restituisce le ore di lavoro
double HourlyEmployee::getHours() const
{
    return hours;
}

/* Override della funzione virtuale pura della classe base Employee
Calcola la retribuzione */
double HourlyEmployee::earnings() const 
{
    if ( getHours() <= 40 )
        return getWage() * getHours();
    else
        return 40 * getWage() + ( ( getHours() - 40 ) * getWage() * 1.5 );
}

/* Override della funzione virtuale della classe base Employee
Stampa informazioni sull'impiegato  */
void HourlyEmployee::print() const
{
   cout << "ore impiegato: ";
   Employee::print(); // code reuse
   cout << "\nPaga oraria: " << getWage() << 
      "; ore di lavoro: " << getHours();
} 
