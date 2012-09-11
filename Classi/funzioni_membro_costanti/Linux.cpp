#include <iostream>
using namespace std;

#include "Linux.h"

// Costruttore
Linux::Linux(string kernel, string distro)
{
    setSystem(kernel, distro);
}

void Linux::setSystem(string os_name, string distro_name)
{
    my_kernel = os_name;
    my_distro = distro_name;
}

string Linux::getOsName() const
{
    return my_kernel;
}

string Linux::getDistroName() const
{
    return my_distro;
}

void Linux::printOS() const
{
    cout << "Kernel: " << getOsName() << endl;
}

void Linux::printDistro()
{
    cout << "Distro: " << getDistroName() << endl;
}
