#include <string>
#include <vector>
#include <algorithm>
#include <fstream>
#include <cstdlib>
using namespace std;

// Il programma riceve un file in input e lo copia, ordinato, in un altro file
// 
// $ g++ input-output.cpp -std=c++11
// $ ./a.out /etc/passwd passwd_ordinato

int main(int argc, char **argv) {
  ifstream ifile(argv[1]);
  ofstream ofile(argv[2]);
  string line;
  
  vector<string> data;
  
  while(getline(ifile, line)) {
    data.push_back(line);
  }
  
  sort(data.begin(), data.end());
  
  for(const auto &i : data) {
    ofile << i << std::endl;
  }
  
  return(EXIT_SUCCESS);
}
