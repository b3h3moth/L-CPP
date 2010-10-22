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
	public:
		
		// Metodo: Settaggio del nome del corso
		void DefinizioneNomeCorso(string corso)
		{
			nomeCorso = corso;

		}

		// Metodo: Lettura del nome del corso
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
				// fatte le dovute eccezioni naturalmente.
				// Questo modo di 'nascondere' i dettagli implementativi e' un
				// concetto estremamente iomportante: *information hiding*.
		
		// Dato membro della classe; ciascun oggetto eventualmente dichiarato
		// della classe Registro, manterra' una copia di ogni dato membro.
		string nomeCorso;
};

int main() {

	// Creazione di un oggetto della classe Registro
	Registro registro;

	cout << "Corso iniziale: " << registro.VisualizzazioneCorso() << "!" << endl;
	registro.DefinizioneNomeCorso("C++");
	registro.MessaggioBenvenuto();



   return(0);
}

