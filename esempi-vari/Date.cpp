#include <iostream>
using namespace std;

#include "Date.h"

// Costruttore, verifica il valore del mese e chiama checkDay per la convalida
// del giorno
Date::Date(int mn, int dy, int yr)
{
	if (mn >0 && mn <= 12)
		month = mn;
	else
	{
		month = 1;
		cout << "invalid month (" << mn << ") set to 1\n";
	}

	year = yr;
	day = checkDay(dy);

	// Mostra la chiamata del costruttore
	cout << "Date object constructor for date ";
	print();
	cout << endl;
}

void Date::print() const
{
	cout << month << '/' << day << '/' << year;
}

// Mostra la chiamata del distruttore
Date::~Date()
{
	cout << "Date object destructor for date ";
	print();
	cout << endl;
}

// Funzione di utilita'
int Date::checkDay(int testDay) const
{
	static const int daysPerMonth[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};

	// verifica se testDay risulta essere vero per qualche mese
	if (testDay > 0 && testDay <= daysPerMonth[month])
		return testDay;

	// Test 29 febbraio
	if (month == 2 && testDay == 29 && (year % 400 == 0) || 
			(year % 4 == 0 && year % 100 != 0) )
		return testDay;
}
