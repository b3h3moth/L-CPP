#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {

	// INSERIMENTO (tradizionale)
	////////////////////////////////////////////////////////////////////////////
	
	cout << "inserimento all'inizio" << endl;
	vector<string> info;
	string name("behemoth");

	// Con insert() si inserisce un elemento all'inizio del contenitore
	info.insert(info.begin(), name);

	vector<string>::iterator iter = info.begin();
	vector<string>::iterator iter_end = info.end();

	for ( ; iter != iter_end; ++iter)
		cout << *iter ;
	
	return(0);
}
