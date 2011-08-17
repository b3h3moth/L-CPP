#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Funzione: Lancio dei dadi
int rollDice();

int main() {
	// Costanti inerenti lo stato del gioco
	enum Status{CONTINUE, WON, LOST};

	// L'obiettivo qualora non ci fosse nè vincita nè perdita al primo tiro
	int myPoint;

	// Può assumere uno dei 3 valori dello Status
	Status gameStatus;

	// Randomizzazione numeri casuali
	srand(time(0));

	// Determina lo stato del gioco in base al primo lancio
	int sumOfDice = rollDice();

	switch(sumOfDice)
	{
		case 7:
		case 11:
			gameStatus = WON;
			break;
		case 2:
		case 3:
		case 12:
			gameStatus = LOST;
			break;
		default:
			gameStatus = CONTINUE;
			myPoint = sumOfDice;
			cout << "Point is: " << myPoint << endl;
			break;
	}

	// Se il gioco non è finito, ossia se si sta nello status CONTINUE
	// si continua a lanciare i dadi:
	while (gameStatus == CONTINUE)
	{
		sumOfDice = rollDice();

		if (sumOfDice == myPoint)
			gameStatus = WON;
		else if (sumOfDice == 7)
			gameStatus = LOST;
	}

	if (gameStatus == WON)
		cout << "Player wins" << endl;
	else
		cout << "Player loses" << endl;

	return(0);
}

int rollDice()
{
	int die1 = 1 + rand() % 6;
	int die2 = 1 + rand() % 6;

	int sum = die1 + die2;

	cout << "Player rolled " << die1 << " + " << die2 << " = " << sum << endl;

	return sum;
}
