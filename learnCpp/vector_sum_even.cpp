/*
1.
Optional: Write a program to find the sum of even numbers and the product of odd numbers in a vector.

For example:

Suppose we have a vector that is {2, 4, 3, 6, 1, 9}.

Then the program should output:

Sum of even numbers is 12
Product of odd numbers is 27
*/

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> num = {2, 4, 3, 6, 1, 9};
 
    int sum_even = 0;
    int product_odd = 1;

    for (int i = 0; i < num.size(); i++){

       if (num[i]%2 == 0)
       {
        sum_even += num[i];

       }else{
    
        product_odd *= num[i];

       }
    }
    cout << "Sum of even numbers is " << sum_even << "\n";
    cout << "Product of odd numbers is " << product_odd << "\n";
}