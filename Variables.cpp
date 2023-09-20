// New.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
#include <cmath>

using namespace std;

int main() {
	double price = 99.99;
	float interest = 3.67f; // add the f
	long filesize = 90000L; // add the capital L, doesn't look like 1 and is not treated as an integer
	char letter = "a";
	bool isValid = false;
	auto isNotValid = true;

	int number = 1.2; // results in "1"
	int number2 = {1.2};
	cout << number2;
	return 0;
}