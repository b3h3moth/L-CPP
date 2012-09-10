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

void Linux::print()
{
    cout << my_kernel << " - " << my_distro << endl;
}
