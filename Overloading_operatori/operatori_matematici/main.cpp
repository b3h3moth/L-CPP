#include <iostream>
using namespace std;

#include "FeetInches.h"

int main() {
    FeetInches obj1(10, 100);
    FeetInches obj2(20, 30);
    FeetInches obj3 = obj2 - obj1;
    FeetInches obj4 = obj3 + obj1;

    cout << obj1.getFeet() << " " << obj1.getInches() << endl;
    cout << obj2.getFeet() << " " << obj2.getInches() << endl;
    cout << obj3.getFeet() << " " << obj3.getInches() << endl;
    cout << obj4.getFeet() << " " << obj4.getInches() << endl;
    
    return(0);
}
