/*
 IL COSTRUTTO DI CLASSE
 
 Saranno ora presenate le nozioni essenziali per la realizzazione di una
 classe in C++, tutto cio' che serve per poter continuare lo studio del
 linguaggio, senza pero' entrare eccessivamente nel dettaglio, ma
 quanto basta per poter proseguire la lettura delle sorgenti.

 La classe si definisce mediante la parola chiave class piu' un
 identificatore, che assume il ruolo di specificatore di tipo; il corpo e'
 caratterizzato da una sezione public e una sezione private.

 class NuovaClasse
 {
  public:
             // Contiene i metodi della classe o funzioni membro.
             // L'interfaccia pubblica, ovvero le operazioni con cui un utente
			 // puo' interagire con l'oggetto della classe.
     
  private:
             // I dati, non accessibili dall'esterno della classe.
 };

*/

#include <iostream>
using namespace std;

// Definizione della classe Registro
class Registro
{ 
	public:		// Dall'esterno della classe possono essere utilizzati solo i
				// metodi pubblici, che stanno ad indicare l'interfaccia 
				// pubblica della classe.

		// Costruttore
		// E' un metodo, solitamente public, con lo stesso nome della classe e
		// privo del valore di ritorno, il suo scopo e' di inizializzare 
		// l'oggetto della classe stessa.
		// In mancanza di un costruttore il compilatore invochera' quello di 
		// default; il costrtuttore di default e' caratterizzato dall'assenza di
		// parametri, puo' essere creato ad-hoc dall'autore della classe oppure
		// invocato automaticamente dal compilatore, ma solo in assenza di altri
		// costruttori.
		Registro(string corso)
		{
			DefinizioneNomeCorso(corso);
		}
		
		// Metodo: Settaggio del nome del corso
		// Funzioni mutators: poiche' modificano i valori
		void DefinizioneNomeCorso(string corso)
		{
			if (corso.length() > 30)
				nomeCorso = corso.substr(0, 30);
			else
				nomeCorso = corso;
		}

		// Metodo: Lettura del nome del corso
		// Funzioni accessors: poiche' leggono i dati
		string VisualizzazioneCorso()
		{
			return nomeCorso;
		}

		// Metodo: Visualizzazione di un messaggio di benvenuto
		void MessaggioBenvenuto()
		{
			cout << "Benvenuto al corso di: " << VisualizzazioneCorso() << endl;
		}

	private:	// Tutto cio' che e' dichiarato dopo lo specificatore d'accesso 
				// private e' visibile solo dai metodi della sezione public, e
				// quindi non e' visibile all'esterno della classe stessa, 
				// fatte le dovute eccezioni naturalmente - come friend -.
				//
				// Quindi, i membri private di una classe possono essere
				// utilizzati solo dai metodi o dalle funzioni membro della 
				// classecstessa.
				//
				// Questo modo di 'nascondere' i dettagli implementativi e' un
				// concetto estremamente iomportante: *information hiding*.
		
		// Dato membro della classe; ciascun oggetto eventualmente dichiarato
		// della classe Registro, manterra' una copia di ogni dato membro.
		string nomeCorso;
};

int main() {

	// Creazione di oggetti della classe Registro
	Registro registroA("Linguaggio C++");
	Registro registroB("Corso di: Object Oriented Programming linguaggio C++");

	// Come si puo' notare ciascun oggetto conserva una copia del dato membro
	cout << "A " << registroA.VisualizzazioneCorso() << endl;
	cout << "B " << registroB.VisualizzazioneCorso() << endl;

   return(0);
}

/* Sin'ora si e' pensato soltanto alle regole generali per la scrittura di una
 * classe, il presente codice sara' suddiviso in file distinti in modo tale da
 * dividere l'interfaccia dall'implementazione, pertanto si faccia riferimento
 * ai file Registro.cpp e Registro.h, rispettivamente implementazione e 
 * definizione della classe Registro.
 */
