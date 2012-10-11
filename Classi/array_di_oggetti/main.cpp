#include <iostream>
#include <cstdlib>
using namespace std;

#include "UnixServer.h"

int main() {
    /* In C si sarebbe utilizzata una define per questo compito, in C++ invece 
    e' piu' conveniente utilizzare le costanti. */
    const int MAX_LEN = 3;

    /* E' possibile definire array di oggetti di classi, nel caso specifico
    della classe UnixServer. */
    UnixServer proxy_server[MAX_LEN];

    cout << "Proxy server list:" << endl;

    // Su ciascun oggetto dell'array sara' invocato il costruttore di default
    for (int i=0; i<MAX_LEN; i++)
        cout << "specifiche server[" << i+1 << "] / OS: "   
             << proxy_server[i].getSystemOS() << " / Release: "  
             << proxy_server[i].getRelease() << " / ID: " 
             << proxy_server[i].getSystemID() << endl; 

    /* Il costruttore puo' essere utilizzato per inizializzare ciascun elemento
    dell'array di oggetti. */
    UnixServer home_server[MAX_LEN] = {
        UnixServer("Debian GNU/Linux","3.2.0", 12),
        UnixServer("OpenBSD","5.1", 19),
        UnixServer("FreeBSD","7.0", 52)
    };

    cout << "\nHome server list:" << endl;
    
    for (int i=0; i<MAX_LEN; i++)
        cout << "specifiche server[" << i+1 << "] / OS: "   
             << home_server[i].getSystemOS() << " / Release: "  
             << home_server[i].getRelease() << " / ID: " 
             << home_server[i].getSystemID() << endl; 

    /* Si possono creare array di oggetti anche se non si ha a disposizione il
    numero totale di oggetti da creare- */
    UnixServer backup_server[] = {
        UnixServer("Debian GNU/Linux", "2.6", 128),
        UnixServer("Gentoo GNU/Linux", "3.2.0", 89),
        UnixServer()
    };

    cout << "\nBackup server list:" << endl;
    
    for (int i=0; i<MAX_LEN; i++)
        cout << "specifiche server[" << i+1 << "] / OS: "   
             << backup_server[i].getSystemOS() << " / Release: "  
             << backup_server[i].getRelease() << " / ID: " 
             << backup_server[i].getSystemID() << endl; 
    
    return(EXIT_SUCCESS);
}
