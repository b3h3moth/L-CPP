#include <iostream>
using namespace std;

// Inclusione della definizione della classe
#include "Registro.h"

// Costruttore
Registro::Registro(string corso)
{
	DefinizioneNomeCorso(corso);
}

// Metodo: Settaggio del nome del corso
void Registro::DefinizioneNomeCorso(string corso)
{
	if (corso.length() > 30)
		nomeCorso = corso.substr(0, 30);
	else
		nomeCorso = corso;
}

// Metodo: Lettura del nome del corso
string Registro::VisualizzazioneCorso()
{
	return nomeCorso;
}

// Metodo: Visualizzazione di un messaggio di benvenuto
void Registro::MessaggioBenvenuto()
{
	cout << "Benvenuto al corso di: " << VisualizzazioneCorso() << endl;
}

/*
 * L'implementazione della classe.
 * 
 * Anzitutto si deve includere il file di intestazione della classe:
 * #include "registro.h".
 *
 * La novita' che salta subito all'occhio e' l'utilizzo dell'operatore di
 * risoluzione di scope "::", il quale e' utilizzato per legare la classe al
 * al metodo definito nell'intestazione, senza del quale il compilatore non
 * potrebbe individuare i metodi implementati come appartenenti alla classe in
 * in esame, Registro nel caso specifico.
 *
 * L'Operatore di risoluzione di scope sara' trattato ampiamente allorquando si
 * trattera' la definizione di classi e i namespace in modo dettagliato.
 */
