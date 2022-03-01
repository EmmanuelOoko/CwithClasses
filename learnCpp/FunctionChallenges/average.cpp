/*
1.
Write a function average() that takes:

A double parameter named num1.
A double parameter named num2.
The function should return a double that is the average of the arguments passed in.
*/

#include <iostream>
using namespace std;

// Define average() here:
double average(double num1, double num2){
    double avg = (num1 + num2) / 2;
    return avg;

}


int main() {
  
  cout << average(42.0, 24.0) << "\n";
  cout << average(1.0, 2.0) << "\n";
  
}