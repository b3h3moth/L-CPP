#include <iostream>
#include <string>
using namespace std;

#include "DateTime.h"

// Costruttore di default
DateTime::DateTime() : Date(), Time() 
{ 
}

// Costruttore
DateTime::DateTime(int d, int mo, int y, int h, int mi, int s) :
    Date(d, mo, y), Time(h, mi, s)
{
}

void DateTime::showDateTime() const
{
    cout << getDay() << "/" << getMonth() << "/" << getYear() << endl;
    cout << getHour() << ":" << getMin() << ":" << getSec() << endl;
}
