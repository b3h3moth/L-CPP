#ifndef SALESPERSON_H
#define SALESPERSON_H

// Tale classe illustra il concetto di funzione di utilita', che non fa parte
// dell'interfaccia della classe, ma piuttosto si tratta di una funzione di
// supporto  alle operazioni delle funzioni membro public di tale classe.
// Le funzioni di utilita' non sono create per essere utilizzate dal client.

class SalesPerson
{
	public:
		SalesPerson();	// Costruttore

		void getSalesFromUser();		// Vendite dell'utente
		void setSales(int month, double amount);	// Vendite mese per mese
		void printAnnualSales();		// Somma e visualizza le vendite
	
	private:
		double totalAnnualSales();		// Funzione di utilita'
		double sales[12];				// Vendite dei 12 mesi
};

#endif
