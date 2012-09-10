#include <iostream>
using namespace std;

#include "Linux.h"

// Costruttore
Linux::Linux(string name)
{
    setOS(name);
}

void Linux::setOS(string os_name)
{
    os = os_name;
}

string Linux::getOS()
{
    return os;
}
