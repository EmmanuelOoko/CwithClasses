/*
1. Optional: Let’s try a challenging problem that will put all your brain cells to the test.

Write a leap_year.cpp program that:

Takes a year as input.
Checks to see if the year is a four-digit number.
Displays whether or not the year falls on a leap year.

There are 3 criteria that must be taken into account to identify a leap year:
If the year can be evenly divided by 4 then it is a leap year, however…
If that year can be evenly divided by 100, and it is not evenly divided by 400, then it is NOT a leap year.
If that year is evenly divisible by 400, then it is a leap year.
*/

#include <iostream>
#include <string>
using namespace std;

int main(){
	string year;

		cout << "Enter any year: ";
	    cin >> year;

	if (year.length()!= 4){
		cout << "Incorrect Year. Length: " << year.length() << "\n";
	}else{
		cout << "Correct! Length: " << year.length() << "\n";
	}

	int jahr = stoi(year);
	cout << "The year is: " << jahr << ".\n";
	
	if (jahr%4==0 && jahr%400==0){
		cout << "Leap Year!!\n";
	}else{
		cout << "Normal Year!\n";
	}
}