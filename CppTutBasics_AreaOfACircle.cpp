// CppTutBasics_AreaOfACircle.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
#include <cmath>

using namespace std;

int main() {
	cout << "Please enter the diameter of the circle: ";
	double diameter;
	cin >> diameter;
	const double pi = 2 * acos(0.0);
	cout << "The area of the circle is: " << pow((diameter / 2), 2) * pi;
	return 0;
}