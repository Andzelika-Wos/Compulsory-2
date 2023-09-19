#include <iostream>
#include "Math.h"
using namespace std;

long int factorial(long int n);
long int function();

int main() 
{
	long int n;
	long int result;
	bool isRunning = true;


	int choice;
	while (isRunning == true)
	{
		cout << "\n";
		cout << "Please type 1, 2, 3 or 4 to choose option\n";
		cout << "1. Factorial\n";
		cout << "2. 3rd degree polynomial equations\n";
		cout << "3. Simple math equations\n";
		cout << "4. Exit\n";
		cout << "\n";
		cin >> choice;
		switch (choice)
		{
		case 1:
			cout << "\n";
			cout << "Type a number you want the factorial of\n";
			cin >> n;
			if (n < 0)
			{
				cout << "silly, factorial of negative numbers is not defined\n";
				result = -1;
			}
			else
			{
				result = factorial(n);
				cout << "Factorial of " << n << " is:";
				cout << result;
				cout << "\n";
			}
			break;

		case 2:
			result = function();
			cout << result;
			break;

		case 3:
			break;

		case 4:
			isRunning = false;
			break;

		default:
			cout << "I SAID 1, 2, 3 OR 4!!!\n";
			cout << "please try again ^^\n";


		}
	}
	
	return 0;

}

long int factorial(long int n)
{
	long int result;
	
	if (n == 1 || n == 0)
	{
		result = 1;
	}
	else {
		result = n * factorial(n - 1);
	}
	return result;
}


long int function()
{
	int a, b, c, d;
	int j = 3;
	int firstPoly[4];
	for (int i = 0; i < 4; i++, j--)
	{
		cout << "enter number :)\n";
		cin >> firstPoly[i];
		cout << firstPoly[i] << "x^" << j << "\n";

	}
	cout << "\n";
	cout << "your poly:\n";
	int j2 = 3;
	for (int i = 0; i < 3; i++, j2--)
	{
		cout << firstPoly[i] << "x^" << j2 << " + ";
	}
	cout << firstPoly[3];
	cout << "\n";
	cout << "\n";

	int a2, b2, c2, d2;
	int k = 3;
	int secondPoly[4];
	for (int i = 0; i < 4; i++, k--)
	{
		cout << "more numbers :3\n";
		cin >> secondPoly[i];
		cout << secondPoly[i] << "x^" << k << "\n";
	}
	cout << "\n";
	cout << "and the second one:\n";
	int k2 = 3;
	for (int i = 0; i < 3; i++, k2--)
	{
		cout << secondPoly[i] << "x^" << k2 << " + ";
	}
	cout << secondPoly[3];

	return 0;
}