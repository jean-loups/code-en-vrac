//: C02:GetWords.cpp
// Break a file into whitespace-separated words
#include <string>
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main() {
  int nbWord = 0;
  vector<string> words;
  ifstream in("compte-word.cpp");
  string word;
  while(in >> word)
    words.push_back(word); 
  for(int i = 0; i < words.size(); i++)
    nbWord = i;
  cout << nbWord + 1 << endl;
} ///:~
