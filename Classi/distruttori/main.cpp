#include <iostream>
using namespace std;

#include "Unix.h"

int main() {
    Unix system((char*)"linux", (char*)"3.2.0");

    cout << " kernel: " << system.getKernelName() << endl;
    cout << "Release: " << system.getKernelRelease() << endl;
    
    return(0);
}
