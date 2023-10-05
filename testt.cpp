count_word.c++ - #3246011E93
#include <string>
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main() {
  vector<string> words;
  ifstream in("count-word.c++");
  string word;
  while(in >> word) {
    words.push_back(word);
  }
  cout << words.size() << endl;
} ///:~
