#include <iostream>
#include "Linux.h"
using namespace std;

int main() {
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

    return(0);
}
