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

FeetInches FeetInches::operator+(const FeetInches &right)
{
    FeetInches tmp;

    tmp.inches = inches - right.inches;
    tmp.feet = feet - right.feet;
    tmp.simplify();

    return tmp;
}

FeetInches FeetInches::operator-(const FeetInches &right)
{
    FeetInches tmp;

    tmp.inches = inches + right.inches;
    tmp.feet = feet + right.feet;
    tmp.simplify();

    return tmp;
}
