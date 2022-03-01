#include <iostream>
#include <vector>
using namespace std;

void vectorManipulation(){
    vector<int> myVector = {12, 31, 14};
    cout<< "First Size: " << myVector.size() << "\n";
    myVector.pop_back();
    cout<< "Second Size: " << myVector.size() << "\n";
    myVector.push_back(51);
    cout<< "Updated Size: " << myVector.size() << "\n";
}

int main (){
    vectorManipulation();
}