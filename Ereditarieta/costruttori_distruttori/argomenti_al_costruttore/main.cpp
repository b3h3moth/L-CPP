#include <iostream>
#include <cstdlib>
using namespace std;

#include "Cube.h"

int main() {
    double cube_width;
    double cube_height;
    double cube_lenth;

    cout << "Dimensioni del cubo" << endl;
    cout << "Larghezza: " ;
    cin >>  cube_width;
    cout << "Altezza: " ;
    cin >>  cube_height;
    cout << "Lunghezza: " ;
    cin >>  cube_lenth;

    // Si istanzia un oggetto Cube
    Cube obj(cube_width, cube_height, cube_lenth);

    cout << "\nProprieta' di un oggetto Cube" << endl;
    cout << "Larghezza: " << obj.getWidth() << endl;
    cout << "Altezza: " << obj.getHeight() << endl;
    cout << "Lunghezza: " << obj.getLength() << endl;
    cout << "Area: " << obj.getArea() << endl;
    cout << "Volume: " << obj.getVolume() << endl;

    return(EXIT_SUCCESS);
}
