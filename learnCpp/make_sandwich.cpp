#include <iostream>
using namespace std;

string make_sandwich(string ing1, string ing2){
    string sandwich = "";
    
    sandwich += "bread\n";
    sandwich += ing1 + "\n";
    sandwich += ing2 + "\n";
    sandwich += "bread\n";
    
    return sandwich;
}

int main() {
    cout << make_sandwich ("peanut butter", "jelly");
}