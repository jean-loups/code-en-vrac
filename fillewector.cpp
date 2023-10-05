//: C02:Fillvector.cpp
// Copie un fichier entier dans un vecteur de chaînes de caractères
#include <string>
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
 
int main() {
  vector<string> v;
  ifstream in("Fillvector.cpp");
  string line;

  int j = 0;

  while(getline(in, line))
    v.push_back(line); // Ajoute la ligne à la fin
  // Ajoute les numéros de lignes:
  for(int i = v.size()-1; i >= 0; i--){
    j++;	  
    cout << j << ": " << v[i] << endl;
  }
} ///:~
