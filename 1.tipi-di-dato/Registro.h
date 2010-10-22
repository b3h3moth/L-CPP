#ifndef REGISTRO_H
#define REGISTRO_H

#include <iostream>
using namespace std;

// Definizione della classe Registro
class Registro
{ 
	public:	
		// Costruttore
		Registro(string);
		
		// Metodi
		void DefinizioneNomeCorso(string);
		string VisualizzazioneCorso();
		void MessaggioBenvenuto();

	private:
		// Dati membro
		string nomeCorso;
};

#endif

/* Il file di intestazione, con estensione .h, specifica i servizi che un 
 * client potra' utilizzare sulla classe, raccoglie tutti i metodi dichiarati
 * in public.
 *
 * Come si puo' ben notare, al posto delle definizioni ci sono solo i prototipi
 * delle funzioni membro, che descrivono l'interfaccia pubblica della classe.
 *
 * In questo modo il client dovra' semplicemente includere nel sorgente il file
 * di intestazione "Registro.h" - attenzione a non confondere questo metodo di
 * inclusione con quello definito con parentesi angolari < >, l'inclusione tra
 * doppi apici infatti ricerca il file di intestazione all'interno della 
 * directory dei sorgenti, invece l'inclusione tra angolari ricerca il file di
 * intestazione all'interno della libreria standard C++ - e non si dovra' 
 * preoccupare minimamente dell'implementazione della classe, che sara'
 * opportunamente collocata in un altro file, con estensione .cpp.
 */
