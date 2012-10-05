#include <iostream>
using namespace std;

#include "Unix.h"

// Il Costruttore inizializza ciascun attributo
Unix::Unix()
{
    kernel_name = "linux";
    kernel_release = "3.20";
    arch_name = "ppc";
}

Unix::Unix(string k_name, string k_rel)
{
    kernel_name = k_name;
    kernel_release = k_rel;
}

string Unix::get_Kernel_Name() const
{
    return kernel_name;
}

string Unix::get_Kernel_Release() const
{
    return kernel_release;
}

string Unix::get_Architecture_Name() const
{
    return arch_name;
}

void Unix::system_Info()
{
    cout << "kernel name: " << get_Kernel_Name() << endl;
    cout << "kernel release: " << get_Kernel_Release() << endl;
    cout << "Arch name: " << get_Architecture_Name() << endl;
}
