#include <iostream>
#include <iomanip>
using namespace std;

#include "Time.h"

// Il Costruttore di default inizializza tutti i dati membro a zero
Time::Time(int h, int m, int s)
{
	setTime(h, m, s);
}

// Imposta il nuovo orario nel formato universale
void Time::setTime(int h, int m, int s)
{
	setHour(h);
	setMinute(m);
	setSecond(s);
}

void Time::setHour(int h)
{
	hour = (h >= 0 &&  h < 24) ? h : 0;
}

void Time::setMinute(int m)
{
	minute = (m >= 0 &&  m < 60) ? m : 0;
}

void Time::setSecond(int s)
{
	second = (s >= 0 &&  s < 60) ? s : 0;
}

int Time::getHour() const
{
	return hour;
}

int Time::getMinute() const
{
	return minute;
}

int Time::getSecond() const
{
	return second;
}

void Time::printUniversal() const
{
	cout << setfill('0')  << setw(2) << getHour() << ":" 
		 << setw(2) << getMinute() << ":" << setw(2) << getSecond() << endl;
}

void Time::printStandard()
{
	cout << ( (getHour() == 0 || getHour() == 12) ? 12 : getHour() % 12) << ":"
		 << setfill('0') << setw(2) << getMinute() << ":" << setw(2)
		 << getSecond() << (hour < 12 ? " AM" : " PM") << endl;
}
