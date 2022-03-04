#include <iostream>
using namespace std;

int main(){
    int power = 9900;

    // Create pointer
    /* int* ptr; */
    int* ptr = nullptr;

    // Later in the program
    ptr = &power;

    // Print ptr
    std::cout << ptr << "\n";
}