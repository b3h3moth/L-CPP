#ifndef CASHREGISTER_H
#define CASHREGISTER_H

/* Un simulatore di cassa tiene traccia degli articoli, aggiornandone la 
quantita' */

class CashRegister
{
    public:
    	// Pulizia relativa al conteggio degli articoli e al totale
    	void clear();
	
	// Aggiunge una voce al registro di cassa
	void add_item(double price);

	// Restituisce l'ammontare delle vendite
	double get_total() const;
	
	// Restituisce il totale degli articoli venduti
	int get_count() const;

    private:
    	int item_count;
	double total_price;
};

#endif
