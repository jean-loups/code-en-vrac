#include <string>
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
 
int main() {
  vector<string> words;
  ifstream in("count-word.cpp");
  string word;
  while(in >> word) {
    words.push_back(word);
  }
  cout << words.size() << endl;
} ///:~
