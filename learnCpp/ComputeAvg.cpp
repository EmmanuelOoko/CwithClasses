#include <iostream>
using namespace std;

int main(){
	//prompt user to enter 3 numbers
	double num1, num2, num3;
	cout << "Enter three numbers: \n";
	cin >> num1 >> num2 >> num3;

	//Compute average
	double avg = (num1 + num2 + num3)/3;

	//Display Result
	cout << "The average of "<< num1 <<", "<< num2 << " & " << num3 << " is " << avg << endl;

	return 0;

}


