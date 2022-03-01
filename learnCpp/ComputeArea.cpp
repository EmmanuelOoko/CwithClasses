#include <iostream>
//using namespace std;

int main(){
	double radius;
	double area;
	const double PI = 3.14159; //Constants are named in uppercase

	//Step 1: Read Radius
	std::cout << "Enter a radius: ";
	std::cin >> radius;

	//Step 2: Compute Area
	area = radius * radius * PI;

	//Step 3: Display the area
	std::cout << "The area is "<< area <<std::endl;

	return 0;
}
