#include <iostream>
#include <iomanip>
#include <vector>
#include <cstdlib>
using namespace std;

// Inclusione delle classe della gerarchia Employee
#include "Employee.h"
#include "SalariedEmployee.h" 
#include "HourlyEmployee.h"
#include "CommissionEmployee.h"  
#include "BasePlusCommissionEmployee.h" 

void virtualViaPointer( const Employee * const );
void virtualViaReference( const Employee & );

int main() {
    cout << fixed << setprecision( 2 );
    
    // Creazione di oggetti classi derivate
    SalariedEmployee salariedEmployee("Mister", "Red", "111-11-1111", 500);
    HourlyEmployee hourlyEmployee("Mister", "Black", "222-22-2222", 12.15, 20);
    CommissionEmployee commissionEmployee("Mister", "Green", "333-33-3333", 
           10500, .05);
    BasePlusCommissionEmployee basePlusCommissionEmployee("Mister", "Pink", 
           "444-44-4444", 3000, .05, 600);
    
    cout << "static binding:\n\n";
    salariedEmployee.print();
    cout << "\nretribuzione $" << salariedEmployee.earnings() << "\n\n";
    hourlyEmployee.print(); 
    cout << "\nretribuzione $" << hourlyEmployee.earnings() << "\n\n";
    commissionEmployee.print();
    cout << "\nretribuzione $" << commissionEmployee.earnings() << "\n\n";
    basePlusCommissionEmployee.print();
    cout << "\nretribuzione $" << basePlusCommissionEmployee.earnings() 
        << "\n\n";
    
    // Vettore per 4 puntatori della classe base
    vector < Employee * > employees( 4 );
    
    // Inizializzazione vettori con Employee 
    employees[ 0 ] = &salariedEmployee;
    employees[ 1 ] = &hourlyEmployee;
    employees[ 2 ] = &commissionEmployee;
    employees[ 3 ] = &basePlusCommissionEmployee;
    
    cout << "Polimorfismo e dynamic binding:\n\n";
    
    for ( size_t i = 0; i < employees.size(); i++ )
        virtualViaPointer( employees[ i ] );
    
    for ( size_t i = 0; i < employees.size(); i++ )    
      virtualViaReference( *employees[ i ] );
    
    return(EXIT_SUCCESS);
} 

void virtualViaPointer( const Employee * const baseClassPtr )
{
    baseClassPtr->print();
    cout << "\nretribuzione $" << baseClassPtr->earnings() << "\n\n";
}

void virtualViaReference( const Employee &baseClassRef )
{
    baseClassRef.print();
    cout << "\nretribuzione $" << baseClassRef.earnings() << "\n\n";
} 
