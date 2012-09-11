#ifndef DATE_H
#define DATE_H

// Le classi Date ed Employee sono utilizzate per una introduzione alla
// inizializzazione di oggetti membro di una classe

class Date
{
    public:	
    	// Costruttore default
	Date (int mn = 9, int dy = 11, int yr = 2012);
	
	void print() const;	// Stampa la data (m,d,y)
	
	// Distruttore
	~Date();		// Ordine di distruzione
    
    private:
    	int month;
	int day;
	int year;
	
	// Funzione di utilita' per la covalida del mese e dell'anno
	int checkDay(int testDay) const;
};

#endif
