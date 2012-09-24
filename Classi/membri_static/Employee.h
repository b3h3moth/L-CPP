#ifndef EMPLOYEE_H
#define EMPLOYEE_H

class Employee
{
    public:
    	// Costruttore
    	Employee(const char *const first, const char *const last);
	// Distruttore
	~Employee();

	// restituisce nome e cognome, rispettivamente
	const char *getFirstName() const;
	const char *getLastName() const;

	// La funzione membro dichiarata static
	static int getCount();

    private:
    	char *firstName;
	char *lastName;

	/* Dati static, tiene il conto del numero degli oggetti istanziati; da
	notare che, poiche' e' un int, avrebbe potuto essere inizializzato nel
	presente file di intestazione. */
	static int count;
};

#endif
