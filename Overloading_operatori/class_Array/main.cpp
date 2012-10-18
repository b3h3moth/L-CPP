#include <iostream>
#include <cstdlib>
using namespace std;

#include "Array.h"

int main() {
    Array obj1(6);
    Array obj2(3);

    if (obj1 != obj2)
    	cout << "array diversi" << endl;
    else
    	cout << "array uguali" << endl;

    cout << obj1.getSize() << " - " << obj2.getSize() << endl;
    
    obj2 = obj1;
    
    cout << obj1.getSize() << " - " << obj2.getSize() << endl;

    if (obj1 == obj2)
    	cout << "array uguali" << endl;
    else
    	cout << "array diversi" << endl;

    cout << "Inserisci il valore: " ; 
    cin >> obj1 >> obj2 ;

    cout << obj1[1] << endl;
    obj1[0] = 10;
    cout << obj1[0] << endl;
    cout << obj1[21] << endl;
    
    return(EXIT_SUCCESS);
}
