#include <iostream>
using namespace std;

int main ()
{
	// Prompt user to enter number
	int number;
	cout << "Enter an integer: ";
	cin >> number;

	if (number % 2 == 1){
		cout << "Odd number!" << endl;
}else{
	cout << "Even number!" << endl;

}

return 0;

}
