#include <iostream>
using namespace std;

#include "Time.h"

int main()
{
    Time ogg1;			// Argomenti di default
    Time ogg2(6);		// Si imposta l'ora; min e sec di default
    Time ogg3(18, 30);		// Si impostano ora e minuti; sec di default
    Time ogg4(21, 30, 59);	// Si impostano ora, minuti, secondi
    Time ogg5(25, 98, 61);	// Si impostano valori non corretti
    const Time ogg6(23, 50, 31);	// Si dichiara un oggetto costante
    ogg6.printUniversal();

    cout << "ogg1: " << endl;
    ogg1.printUniversal();
    ogg1.printStandard();

    cout << "ogg2: " << endl;
    ogg2.printUniversal();
    ogg2.printStandard();

    cout << "ogg3: " << endl;
    ogg3.printUniversal();
    ogg3.printStandard();

    cout << "ogg4: " << endl;
    ogg4.printUniversal();
    ogg4.printStandard();

    cout << "ogg5: " << endl;
    ogg5.printUniversal();
    ogg5.printStandard();

    cout << "ogg6: " << endl;
    ogg6.printUniversal();
    // ogg6.printStandard(); Errore poichè si sta utilizzando un oggetto 
    // dichiarato const

    return (0);
}
