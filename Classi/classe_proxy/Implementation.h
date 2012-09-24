// Definizione della classe da proteggere
class Implementation
{
    public:
    	// Costruttore e relativa inizializzazione
	Implementation(int x) : value(x) {};

	void setValue(int x)
	{
	    value = x;
	}

	int getValue() const
	{
	    return value;
	}

    private:
    	// Il dato che si intende nascondere alla vista del client
    	int value;
};
