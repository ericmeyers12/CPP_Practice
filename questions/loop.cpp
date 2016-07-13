#include <iostream>
#include <string>

using namespace std;

#define LOOP_SIZE 100

int main(){

  string word = "hello";
  string reversed
  ; //not initialized - will consider edge cases.
  for (int i = 0; i < word.length()/2; i ++)
  {
    reversed[i] = word[word.length()-i];
  }
  cout << word << endl;
  cout << reversed << endl;


}
