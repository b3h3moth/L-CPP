#include <iostream>
#include <iomanip>
using namespace std;

#include "SalesPerson.h"

// Il costruttore inizializza l'array sales 
SalesPerson::SalesPerson()
{
	int i;
	for (i=0; i<12; i++)
		sales[i] = 0.0;
}

// I dati dell'utente vengono elaborati
void SalesPerson::getSalesFromUser()
{
	int i;
	double salesFigure;

	for (i=1; i<=12; i++)
	{
		cout << "enter sales amount for month " << i << ": ";
		cin >> salesFigure;
		setSales(i, salesFigure);
	}
}

// Sono impostate le vendite di un mese
void SalesPerson::setSales(int month, double amount)
{
	if (month >= 1 && month <=12 && amount > 0)
		sales[month-1] = amount;
	else
		cout << "Invalid month or sales figure" << endl;
}

// Somma annuale vendite
void SalesPerson::printAnnualSales()
{
	cout << setprecision(2) << fixed << "The total annual sales are: $"
		<< totalAnnualSales() << endl;
}

// La funzione di utilita' per la somma delle vendite
double SalesPerson::totalAnnualSales()
{
	int i;
	double total = 0.0;

	for (i=0; i<12; i++)
		total += sales[i];

	return total;
}
