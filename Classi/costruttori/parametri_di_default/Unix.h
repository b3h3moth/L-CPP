#ifndef UNIX_X
#define UNIX_H

#include <string>
using namespace std;


class Unix {    
    public:
        /* Un costruttore puo' avere dei parametri di default definiti nell'
        header stesso della funzione - o prototipo se si preferisce -, in tal
        modo un nuovo oggetto istanza della classe Unix, sara' creato ed
        inizializzato con valori consisenti; tale costruttore sostituisce il 
        costruttore di default, per cui in questo caso non serve scriverlo, 
        e ne' il compilatore lo produrra', ovviamente.
        
        La chiamata pertanto sara': Class object;
        senza parentesi tonde. */
        Unix(string k_name = "linux", string k_rel = "3.2.0");

        string get_Kernel_Name() const;
        string get_Kernel_Release() const;

        void system_Info();

    private:
        string kernel_name;
        string kernel_release;
};

#endif
