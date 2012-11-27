#include <iostream>
using namespace std;

#include "Unix.h"

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

void Unix::system_Info()
{
    cout << "kernel name: " << get_Kernel_Name() << endl;
    cout << "kernel release: " << get_Kernel_Release() << endl;
}
