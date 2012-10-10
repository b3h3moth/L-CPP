#include <iostream>
#include <string>
using namespace std;

#include "Debian.h"

Debian::Debian()
{
    stable = "stable";
    testing = "testing";
}

Debian::Debian(string s, string t)
{
    stable = s;
    testing = t;
}

void Debian::setStableDistro(string s)
{
    stable = s;
}

void Debian::setTestingDistro(string t)
{
    testing = t;
}

string Debian::getStableDistro()
{
    return stable;
}

string Debian::getTestingDistro()
{
    return testing;
}

