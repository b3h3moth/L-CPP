#include <iostream>
using namespace std;

int main() {
   int val = 1024, val2 = 2048;
   int *p = &val;
   *p = val2; // dereferenzio *p
   int **ppi = &p;
   int *p2 = *ppi; // dereferenzio *p2

   cout << "Il valore di val\n"
      << "valore diretto: " << val << "\n"
      << "valore  indiretto: " << *p << "\n"
      << "valore doppiamente indiretto: " << **ppi 
      << endl;
   return(0);
}

