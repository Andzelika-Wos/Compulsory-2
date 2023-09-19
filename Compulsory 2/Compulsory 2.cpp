#include <iostream>
#include "Math.h"
using namespace std;


int factorial(int choice);
int factorial(int n);

int main() 
{
	int choice;
	cout << "1. Factorial\n";
	cout << "2. 3rd degree polynomial equations\n";
	cout << "3. Simple math equations\n";
	cout << "4. Exit\n";
	cout << "\n";
	cout << "Please type 1, 2, 3 or 4 to choose option\n";
	cin >> choice;
	switch (choice) 
	{
	case 1: 
		factorial(choice);
		break;
	default:
		cout << "whatever";
	}

	int n;
	cout << "number\n";
	cin >> n;
	cout << "ye\n";
	
	return 0;

}

int factorial(int n)
{
	if (n < 0)
	{
		cout << "silly, factorial of negavive numbers is not defined";
	}

	int result;
	if (n == 1 || n == 0)
	{
		result = 1;
	}
	else {
		result = n * factorial(n - 1);
	}
	return result;
}