#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

#include "CommissionEmployee.h"
#include "CommissionEmployeePlus.h"

int main() {
    // Si crea un oggetto della classe base
    CommissionEmployee obj_base("John","Doe","123-45-678",1000,.50);

    // Si crea un puntatore alla classe base
    CommissionEmployee *ptr_obj_base = 0;

    // Si crea un oggetto della classe derivata
    CommissionEmployeePlus obj_der("Frank","Smith","098-76-543",2500,.50,500);

    // Si crea un puntatore alla classe derivata
    CommissionEmployeePlus *ptr_obj_der = 0;

    cout << fixed << setprecision(2);

    cout << "......... Clase Base - binding statico ........" << endl;
    obj_base.print();
    cout << "\n\n......... Clase Derivata - binding statico ...." << endl;
    obj_der.print();

    /* Assegna l'indirizzo di un oggetto della classe base ad un puntatore alla
    classe base, dopodiche' mediante tale puntatore si invoca la funzione 
    virtuale print() per la stampa a video. */
    cout << "\n\n......... binding dinamico ........" << endl;
    ptr_obj_base = &obj_base;
    ptr_obj_base->print();

    /* Assegna l'indirizzo di un oggetto della classe derivata ad un puntatore 
    alla classe derivata */
    ptr_obj_der = &obj_der;
    cout << "\n" << endl;
    ptr_obj_der->print();
    
    /* Le chiamate precedenti dimostrano che mediante un puntatore alla
    classe base associato ad un oggetto della classe base si possono invocare
    funzionalita' di quella classe, stesso discorso se fosse stato un puntataore
    alla classe derivata associato ad un oggetto della medesima classe.
    
    In questo caso invece un puntataore alla classe base e' collegato ad un
    oggetto della classe derivata, cosa lecita poiche' un oggetto della classe 
    derivata e' anche un oggetto della classe base, inoltre il puntatore puo'
    utilizzare solo le funzionalita' della classe base presenti nell'oggetto 
    della classe derivata. 
    
    Qualora ci si riferisse ad un membro esclusivo della classe derivata - cioe'
    che non appartiene anche alla classe base -  attraverso il puntatore alla 
    classe base, ci sarebbe un errore da parte del compilatore; per risolvere 
    tale problematica si dovrebbe utilizzare la tecnica del downcasting.
    
    Il Downcasting consente di effettuare un cast esplicito di un puntatore alla
    classe base ad un puntatore della classe derivata, consentendogli in tal
    modo l'accesso a tutte le funzionalita' della classe derivata.

    In questo caso vi e' polimorfismo, poiche' si invoca  la funzione della 
    classe derivata da un puntatore della classe base. */
    ptr_obj_base = &obj_der;
    cout << "\n" << endl;
    ptr_obj_base->print();

    return(EXIT_SUCCESS);
}
