#include <iostream>
using std::cout;

#include "Employee.h"

// Costruttore 
Employee::Employee( const string &first, const string &last, const string &ssn )
: firstName( first ), lastName( last ), socialSecurityNumber( ssn )
{

}

// Setta il nome
void Employee::setFirstName( const string &first ) 
{ 
    firstName = first;  
}

// Restituisce il nome
string Employee::getFirstName() const 
{ 
    return firstName;  
}

// Setta il cognome
void Employee::setLastName( const string &last )
{
    lastName = last;   
}

// Restituisce il cognome
string Employee::getLastName() const
{
    return lastName;   
}

// Setta il numero SSN, il corrispondente italiano numero INPS
void Employee::setSocialSecurityNumber( const string &ssn )
{
    socialSecurityNumber = ssn;
}

// Restituisce il numero SSN
string Employee::getSocialSecurityNumber() const
{
   return socialSecurityNumber;   
}

// Funzione virtuale - Stampa informazioni sul dipendente,
void Employee::print() const
{ 
   cout << getFirstName() << ' ' << getLastName() 
      << "\nSSN: " << getSocialSecurityNumber(); 
}
