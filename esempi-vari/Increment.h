#ifndef INCREMENT_H
#define INCREMENT_H

// Classe utilizzata per implementare l'inizializzazione di un dato membro
// costante con un inizializzatore anch'esso costante

class Increment
{
	public:
		// Costruttore di default
		Increment(int c = 0, int i = 1);
		
		void addIncrement()
		{
			count += increment;
		}
		
		void print() const;

	private:
		int count;
		const int increment;
};

#endif
