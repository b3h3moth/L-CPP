#include <iostream>
using namespace std;

#include "Date.h"

Date::Date(int d, int m, int y)
{
    day = d;
    month = m;
    year = y;
}

bool Date::operator==(Date &dright)
{
    if (day == dright.day && month == dright.month && year == dright.year)
        return true;
    else
        return false;
}

bool Date::operator>(Date &dright)
{
    if (year > dright.year)
        return true;
    else if (year == dright.year) {
        if (month > dright.month)
            return true;
        if (month == dright.month)
            if (day > dright.day)
                return true;
        if (day == dright.day)
            return false;
    }
}

bool Date::operator<(Date &dright)
{
    if (year < dright.year)
        return true;
    else if (year == dright.year) {
        if (month < dright.month)
            return true;
        if (month == dright.month)
            if (day < dright.day)
                return true;
        if (day == dright.day)
            return false;
    }
}
