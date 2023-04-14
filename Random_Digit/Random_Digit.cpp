// Random_Digit.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int min, max;
    char choice;

	do
	{
		cout << "Enter the minimum value: ";
		cin >> min;
		cout << "Enter the maximum value: ";
		cin >> max;

		srand(time(NULL));
		int random_num = rand() % (max - min + 1) + min;
		cout << "Random number between " << min << " and " << max << " is: " << random_num << endl;

		cout << "Do you want generate another random number? (y/n): ";
		cin >> choice;

	} while (choice == 'y' || choice == 'Y');


}


