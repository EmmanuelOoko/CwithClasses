#include <iostream>
#include <vector>
using namespace std;

void vectorManipulation(){
    vector<int> myVector(4);

    cout << "Enter " << myVector[0] << ": \n";
    cin >> myVector[0];

    cout << "Enter " << myVector[1] << ": \n";
    cin >> myVector[1];

    cout << "Enter " << myVector[2] << ": \n";
    cin >> myVector[2];

    cout << "Enter " << myVector[3] << ": \n";
    cin >> myVector[3];

    //Listing all the elements in the vector before pop_back()
    for (int num = 0; num < myVector.size(); num++){
           cout << myVector[num] << "\n";
    }

    cout<< "First Size: " << myVector.size() << "\n";
    myVector.pop_back();
    cout<< "Second Size: " << myVector.size() << "\n";
    myVector.push_back(51);
    myVector.push_back(54);
    myVector.push_back(71);
    cout << "Updated Size: " << myVector.size() << "\n";

    //Listing all the elements in the vector
    for (int i = 0; i < myVector.size(); i++){
           cout << myVector[i] << "\n";
    }
}

int main (){
    vectorManipulation();
}