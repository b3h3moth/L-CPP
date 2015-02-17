#include <iostream>
using namespace std;

#include "FeetInches.h"

int main() {
    FeetInches obj1(10, 20);
    FeetInches obj2(30, 40);
    FeetInches obj3 = obj2 - obj1;
    FeetInches obj4 = obj3 + obj1;

    cout << "Obj1: f " << obj1.getFeet() << " - i " << obj1.getInches() << endl;
    cout << "Obj2: f " << obj2.getFeet() << " - i " << obj2.getInches() << endl;
    cout << "Obj3: f " << obj3.getFeet() << " - i " << obj3.getInches() << endl;
    cout << "Obj4: f " << obj4.getFeet() << " - i " << obj4.getInches() << endl;

    ++obj1;
    cout << "Obj1: f " << obj1.getFeet() << " - i " << obj1.getInches() << endl;
    
    obj2++; 
    cout << "Obj2: f " << obj2.getFeet() << " - i " << obj2.getInches() << endl;

    return(0);
}
