#ifndef CLASS_H
#define CLASS_H

class Unix
{
    public:
        // Costruttore
        Unix(char *k_name, char *k_rel);

        /* Un distruttore e' una funzione membro che viene automaticamente 
        invocata quando un oggetto e' eliminato; ha lo stesso nome della classe
        preceduto dal simbolo tilde '~', inoltre, come un  costruttore, non ha 
        tipo di ritorno, tuttavia i cosruttori non accettano argomenti.
        
        Sono necessari solo se l'oggetto presenta un'estensione dinamica; non 
        puo' essere invocato esplicitamente dal programma utente, ma viene
        invocato implicitamente dal compilatore quando si dealloca lo spazio di 
        memoria assegnato ad un oggetto. */
        ~Unix();

        const char *getKernelName() const { return kernel_name; }
        const char *getKernelRelease() const { return kernel_release; }

    private:
        char *kernel_name;
        char *kernel_release;
};

#endif
