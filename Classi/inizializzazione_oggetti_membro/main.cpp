#include <iostream>
using namespace std;

#include "Employee.h"

int main() {
    Date birth(3, 31, 1973);
    Date hire(10, 1, 2002);
    Employee manager("Luca", "Suriano", birth, hire);
    cout << endl;
    manager.print();
    
    cout << "\nTest date constructor with invalid value:\n";
    Date oggetto(13,32,1998);
    cout << endl;
    
    return(0);
}
