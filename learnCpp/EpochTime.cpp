#include <iostream>
#include <ctime>
using namespace std;

int main(){
	int totalSeconds = time(0);
	cout << "The seconds are: " << totalSeconds << endl;
	int currentSecond = totalSeconds % 60;
	cout << "The current second is: " << currentSecond << endl;
	int totalMinutes = totalSeconds / 60;
        int currentMinute = totalMinutes % 60;
	cout << "The minutes are: " << totalMinutes << endl;
        cout << "The current minute is: " << currentMinute << endl;
        int totalHours = totalMinutes / 60;
        int currentHour = totalHours % 24;
        cout << "The total hours are: " << totalHours << endl;
        cout << "The current hour is: " << currentHour << endl;

        cout << "Current time is: " << currentHour << ":" << currentMinute << ":" << currentSecond << " GMT" << endl;	

	return 0;

}
