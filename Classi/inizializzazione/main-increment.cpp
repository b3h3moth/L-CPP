#include <iostream>
using namespace std;

#include "Increment.h"

int main() {
    Increment oggetto(100, 50);
    
    cout << "Prima dell'incremento: ";
    oggetto.print();
    
    for (int j=1; j<=3; j++) {
    	oggetto.addIncrement();
	cout << "Dopo l'incremento: " << j << ": ";
	oggetto.print();
    }
    
    return(0);
}
