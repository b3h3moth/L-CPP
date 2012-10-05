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

Il C++ utilizza un costruttore di default, creato automaticamente, qualora non 
fosse implementato nella classe.
*/

class Unix {
    public:
        /* Il Costruttore di default non prende argomenti, in questo caso e' 
        stato inserito ma se non ci fosse stato sarebbe stato inserito
        ugualmente dal C++. */
    	Unix();

        /* Quest'altro costruttore consente la creazione di un oggetto e
        la relativa inizializzazione di due attributi, gli altri saranno
        lasciati al valore di default. */
        Unix(string k_name, string k_rel);

        string get_Kernel_Name() const;
        string get_Kernel_Release() const;
        string get_Architecture_Name() const;
        string get_Operating_System_Name() const;

        void system_Info();

    private:
        string kernel_name;
        string kernel_release;
        string arch_name;
};

#endif
