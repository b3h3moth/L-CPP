#include <iostream>
using namespace std;

#include "Employee.h"

int main() {
    Date birth(10, 10, 1925);
    Date hire(10, 10, 2002);
    Employee manager("Guidus", "Surujan", birth, hire);
    cout << endl;
    manager.print();
    
    cout << "\nTest date constructor with invalid value:\n";
    Date oggetto(13,32,1998);
    cout << endl;
    
    return(0);
}
