#include <iostream>
using namespace std;

#include "Linux.h"
#include "CashRegister.h"

int main() {
    // Esempio classe Linux //
    Linux os("BSD", "OpenBSD");
    os.printOS();
    os.printDistro();
    os.setSystem("Linux", "Slackware");
    os.printOS();
    os.printDistro();

    const Linux os2("BSD", "FreeBSD");
    
    // Errore: funzione membro non costante su un oggetto costante 
    // os2.setSystem("Linux", "Slackware");

    // OK: oggetto costante su funzione membro costante
    os2.printOS();
    
    // Errore: oggetto costante su funzione membro non costante
    // os2.printDistro();

    // Classe CashRegister //
    CashRegister ogg1;
    ogg1.clear();
    ogg1.add_item(10.90);
    cout << ogg1.get_total() << " " << ogg1.get_count() << endl;

    return(0);
}
