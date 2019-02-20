#include <iostream>

using namespace std;

int main (){
  int repeats = 60;
  char letter = 'k';
  for (int i = 1; i <= repeats; i++){
    for (int n = 1; n <= i; n++) {
      std:cout << letter;
    }
      cout << "\n";
  }
}
