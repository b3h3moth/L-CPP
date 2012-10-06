#ifndef UNIX_X
#define UNIX_H

#include <string>
using namespace std;

/* COSTRUTTORE
Un costruttore e' una funzione membro, invocata automaticamente quando un 
oggetto viene istanziato, o creato in memoria, e' una sorta di inizializzatore;
un costruttore serve sostanzialmente ad inizializzare gli attributi degli
oggetti, ovvero i dati membro.

Il nome del costruttore di una classe coincide col nome della della classe 
stessa, esso inoltre non prevede la restituzione di valori.
*/

class Unix {    
    public:
        /* Il Costruttore di default e' un costruttore che non prende argomenti,
        in questo caso e' stato inserito nella classe ma qualora non ci fosse 
        stato, il C++ ne avrebbe inserito uno automaticamente. */
        Unix();
                                                 
        /* Un costruttore puo' avere dei parametri, in questo caso ve ne sono 
        due, per cui, quando nel main sara' istanziato un oggetto, esso potra' 
        essere inizializzato mediante due argomenti. */ 
        Unix(string k_name, string k_rel);

        string get_Kernel_Name() const;
        string get_Kernel_Release() const;
        string get_Architecture_Name() const;

        void system_Info();

    private:
        string kernel_name;
        string kernel_release;
        string arch_name;
};

#endif
