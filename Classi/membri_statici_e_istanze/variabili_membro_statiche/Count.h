#ifndef COUNT_H
#define COUNT_H

class Count
{
    public:
        /* Costruttore di default; ogni volta che viene creata una instanza
        della classe Count, la variabile membro statica 'count_obj' sara' 
        incrementata, per cui in tale variabile sara' collocato il numero totale
        delle istanze della classe in oggetto. */
        Count() { count_obj++; };
        
        int getObjCount() const { return count_obj; };

    private:
        static int count_obj;
};

/* La definizione della variabile membro statica e' definita fuori del corpo 
della classe. */
int Count::count_obj = 0;

#endif
