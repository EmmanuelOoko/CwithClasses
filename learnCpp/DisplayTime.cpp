#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	//Prompt the user for input
	int seconds;
	cout << "Enter an integer for seconds: " << endl;
	cin >> seconds;

	int minutes = seconds / 60;
	int remainingSeconds = seconds % 60;

	cout << seconds << " seconds is " << minutes << " minutes and " << remainingSeconds << " seconds." << endl;

	return 0;
}
