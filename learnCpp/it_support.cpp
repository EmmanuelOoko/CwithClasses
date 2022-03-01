#include <iostream>
using namespace std;

  // Conduct IT support
void  on_off_attempt(string on_off){
  cout << "Hello. IT.\n";
  cout << "Have you tried turning it off and on again? y/n\n";
  cin >> on_off;
  }

int main() {
  // Check in with Jenn
  //std::string response;
  cout << "Oh hi Jen!\n";
  string response = "yes";
  on_off_attempt(response);

  /* Check in with Roy
  std::string jibu;
  std::cout << "You stole the stress machine? But that's stealing!\n";
  on_off_attempt(jibu); */

  
}