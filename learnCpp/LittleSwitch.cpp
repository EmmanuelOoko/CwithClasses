/*
 *1.
Optional: Little Mac is an interplanetary space boxer, who is trying to win championship belts for various weight categories on other planets within the solar system.

Write a space.cpp program that helps him keep track of his target weight by:

It should ask him what his earth weight is.
Ask him to enter a number for the planet he wants to fight on.
It should then compute his weight on the destination planet.
Here is the table of conversion:

#	Planet	Relative Gravity
1	Mercury	0.38
2	Venus	0.91
3	Mars	0.38
4	Jupiter	2.34
5	Saturn	1.06
6	Uranus	0.92
7	Neptune	1.19

 * */

#include <iostream>
using namespace std;

int main() {
  double weight;
  int planet;

  cout << "Enter your weight: ";
  cin >> weight;

  cout << "Enter target planet: ";
  cin >> planet;

  switch (planet){
    case 1 :
      cout << "Mercury, Weight: " << weight*0.38 << "\n";
      break;
    case 2 :
      cout << "Venus, Weight: " << weight*0.91 << "\n";
      break;
    case 3 :
      cout << "Mars, Weight: " << weight*0.38 << "\n";
      break;
    case 4 :
      cout << "Jupyter, Weight: " << weight*2.34 << "\n";
      break;
    case 5 :
      cout << "Saturn, Weight: " << weight*1.06 << "\n";
      break;
    case 6 :
      cout << "Uranus, Weight: " << weight*0.92 << "\n";
      break;
    case 7 :
      cout << "Neptune, Weight: " << weight*1.19 << "\n";
      break;
    default :
      cout << "Unknown\n";
      break;
  }
}
