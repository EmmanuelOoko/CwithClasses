/*1.
Write a function named first_three_multiples() that has:

An int parameter named num.
The function should return an std::vector of the first three multiples of num in ascending order.

For example, first_three_multiples(7) should return a vector with 7, 14, and 21.

*/
#include <iostream>
#include <vector>
using namespace std;

//Define first_three_multiples() here:
void first_three_multiples(){
    int num = 4;

    num *= 1;
    num *= 2;
    num *= 3;
    
    cout << num << "\n";

} 

int main() {
  
 // for (int element : first_three_multiples(8)) {
  //  std::cout << element << "\n";
 // }
 
     // Returns only 7
     //  int element = 
    
    first_three_multiples();
    //cout << element << "\n"; 

 /*
  
       for(int i=1; i<4; i++){
        int num = 7;
        num *= i;

        cout << num << "\n";
        
    } */
  
}