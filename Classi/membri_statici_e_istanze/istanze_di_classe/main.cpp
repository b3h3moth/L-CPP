#include <iostream>
using namespace std;

#include "Rectangle.h"

int main() {
    /* Ciascun oggetto o istanza di una classe, ha la propria copia delle 
    variabili membro della classe stessa, per cui nel caso in esame le variabili
    membro dell'oggetto rec1 saranno distinte dalle variabili membro della 
    classe rec2, poiche' si tratta di due oggetti diversi. */
    Rectangle rec1(0,0), rec2(0,0);

    // Si settano le variabili membro dell'oggetto rec1
    rec1.setWidth(10);
    rec1.setLenght(20);
    
    // Si settano le variabili membro dell'oggetto rec2
    rec2.setWidth(10.5);
    rec2.setLenght(20.5);

    cout << "Area rec1: " << rec1.getArea() << " " 
         << "Area rec2: " << rec2.getArea() << endl;
    
    return(0);
}
