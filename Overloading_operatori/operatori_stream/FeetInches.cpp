#include <cstdlib>
#include "FeetInches.h"

FeetInches::FeetInches(int f = 0, int i = 0)
{
    feet = f;
    inches = i;

    simplify();
}

void FeetInches::simplify()
{
    if (inches >= 12) {
        feet += (inches / 12);
        inches = inches % 12;
    } else if (inches < 0) {
        /* abs() e' una funzione della standard library, nata per ottenere il 
        valore assoluto. */
        feet -= ((abs(inches) / 12) + 1);
        inches = 12 - (abs(inches) % 12);
    }
}

ostream &operator<<(ostream &output, const FeetInches &obj)
{
    output << obj.feet << " feet - " << obj.inches << " inches" << endl;
    
    return output;
}

istream &operator>>(istream &input, FeetInches &obj)
{
    cout << "Feet: ";
    input >> obj.feet;
    cout << "Inches: ";
    input >> obj.inches;

    obj.simplify();

    return input;
}
