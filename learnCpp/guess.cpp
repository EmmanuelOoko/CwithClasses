#include <iostream>
using namespace std;
int main() {

  int guess;
  
  int tries = 0;

  cout << "I have a number 1-10.\n";
  cout << "Please guess it: ";
  cin >> guess;

  guess++;
  // Write a while loop here:
  while (guess != 8 && tries < 50){
    cout << "Wrong guess, try again: ";
    cin >> guess;
    guess++;
  }
  
  if (guess == 8) {
    
    std::cout << "You got it!\n";
  
  }  
  
}
