#include <iostream>
using namespace std;

#include <utility>

int main() {
	// Tipo PAIR
	// La classe di oggetti di tipo pair permette di associare a due valori
	// dello stesso tipo o di tipo differente, un unico oggetto, o se si
	// preferisce, ad un oggetto possono essere assegnati due valori anche di
	// tipo eterogeneo tra loro.
	
	// Viene creato l'oggetto book di tipo pair, caratterizzato, o definito, 
	// da due oggetti di tipo string, inizializzati con "C++" e "Stroustrup:
	pair<string, string> books("C++ Primer", "The C++ Programming Language");

	cout << books.first << " " << books.second << endl;

	// La typedef in questo si mostra in tutta la sua utilita':
	typedef pair<string, string> programming_languages;

	// Ora posso dichiarare oggetti di tipo pair<string, string> utilizzando un
	// il sinonimo programming_languages
	programming_languages object_oriented("C++", "Simula");
	
	if (object_oriented.first == "C++")
		cout << "The father of C++ is Bjarne Stroustrup" << endl;
	
	if (object_oriented.second == "Simula")
		cout << "Simula is the first Object Oriented Programming" << endl;

	// Come si puo' vedere la coppia puo' essere definita con tipi di dato
	// diversi tra loro:
	typedef pair<string, int> authors;
	authors computer_science;

	cout << "Chi ha scritto " << books.first << "? (in minuscolo) " ;
	cin >> computer_science.first;

	// Confronto tra stringhe
	if ( computer_science.first == "stroustrup" )
		cout << "Esatto, sei stato molto attento :)" << endl;
	else
		cout << "Mi spiace, l'autore non e' " << computer_science.first << 
			" Ma e' Bjarne Strustrup ... e te l'avevo pure detto :) " << endl;

	cout << "In che anno e' nato il C++? ";
	cin >> computer_science.second ;

	// Attenzione, stiamo confrontando interi, non servono i doppi apici
	if (computer_science.second == 1979)
		cout << "Esatto" << endl;
	else
		cout << "Non e' stato scritto nel " << computer_science.second << " ma nel 1979" << endl;


   return(0);
}

