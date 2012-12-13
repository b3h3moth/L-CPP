#include <iostream>
#include <cstdlib>
using namespace std;

#include "Car.h"
#include "Truck.h"
#include "Suv.h"

int main() {
    // Si crea un oggetto della classe Car, derivata di  Automobile
    Car auto_strada("Ferrari", 2007, 1000, 150000, 2);
    // Si crea un oggetto della classe Truck, derivata di  Automobile
    Truck auto_cross("Volvo", 2003, 30000, 20000, "4WD");
    // Si crea un oggetto della classe Suv, derivata di  Automobile
    Suv auto_famiglia("FIAT", 2010, 20000, 10000, 6);

    cout << "Ho una " << auto_strada.getMarca() << " del " 
         << auto_strada.getModello() << " con " << auto_strada.getPortiere() 
         << " porte e circa " << auto_strada.getKilometraggio() << "km. " 
         << "Prezzo $" << auto_strada.getPrezzo() << endl;

    cout << "Ho una " << auto_cross.getMarca() << " del " 
         << auto_cross.getModello() << " con " << auto_cross.getRuoteMotrici()
         << " ruote motrici e circa " << auto_cross.getKilometraggio() 
         << "km. " << "Prezzo $" << auto_cross.getPrezzo() << endl;

    cout << "Ho una " << auto_famiglia.getMarca() << " del " 
         << auto_famiglia.getModello() << " da " 
         << auto_famiglia.getPasseggeri() << " passeggeri e circa " 
         << auto_famiglia.getKilometraggio() << "km. " 
         << "Prezzo $" << auto_famiglia.getPrezzo() << endl;

    return(EXIT_SUCCESS);
}
