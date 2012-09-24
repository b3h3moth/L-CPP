#include <iostream>
using namespace std;

#include "Interface.h"

int main() {
    Interface ogg(10);
    ogg.setValue(20);
    cout << ogg.getValue() << endl;
    
    return(0);
}
