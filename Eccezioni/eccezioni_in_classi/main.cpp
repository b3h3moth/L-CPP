#include <iostream>
#include <cstdlib>
using namespace std;

#include "Rectangle.h"

int main() {
    double width, length;

    // Creazione di un oggetto Rectangle
    Rectangle myrect;

    cout << "Inserire altezza e larghezza del rettangolo: " ;
    cin >> length >> width;

    try {
        myrect.setWidth(width);
        myrect.setLenght(length);
        cout << "area rettangolo: " << myrect.getArea() << endl;
    } catch (Rectangle::ExceptionNegativeSize) {
        cout << "ERR: inserito valore negativo.\n";
    }

    return(EXIT_SUCCESS);
}
