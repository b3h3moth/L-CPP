/* CLASSE PROXY
Una classe proxy permette di nascondere anche i dati membro 'private' ai client
che utilizzeranno la classe stessa; trattasi di un'ulteriore tecnica per il 
mascheramento delle informazioni.
*/

class Implementation;

class Interface
{
    public:
    	/* L'interfaccia pubblica della classe proxy Interface e' identica alla
	classe Implementation, fatta eccezione per il costruttore e il 
	distruttore. */
	
	// Costruttore
	Interface(int);

	// Interfaccia pubblica
	void setValue(int);
	int getValue() const;

	// Distruttore
	~Interface();
    
    private:
    	/* Utilizzando un puntatore alla classe da nascondere,
	e' possibile mascherare i dettagli implementativi. */
    	Implementation *ptr;
};
