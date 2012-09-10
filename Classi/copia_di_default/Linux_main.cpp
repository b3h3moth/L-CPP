#include <iostream>
#include "Linux.h"
using namespace std;

int main() {
    Linux test("BSD", "OpenBSD");
    Linux test2;
    Linux test3;
    
    test.print();
    test2.print();
    
    test2 = test;
    test.print();
    test2.print();

    test = test2 = test3;
    test.print();
    test2.print();
    test3.print();

    return(0);
}
