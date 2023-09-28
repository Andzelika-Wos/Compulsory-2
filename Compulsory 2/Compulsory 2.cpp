#include <iostream>
#include "Math.h"
#include "polyFunction.h"
#include "calculator.h"
#define _POLYFUNCTION_
#define _CALCULATOR_
using namespace std;

long int factorial(long int n);

int main() 
{
	long int n;
	int result;
	bool isRunning = true;
	bool runningPoly = true;

	
	int polyChoice;
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

			while (runningPoly = true)
			{
		case 2:
			result = polyFunction();
			cout << "\n";
			cout << "What do you want to do? (Type 1, 2, 3 or 4)\n";
			cout << "1. Add the polynomials\n";
			cout << "2. Substract the polynomials\n";
			cout << "3. Multiply the polynomials\n";
			cout << "4. Go back to menu\n";
			cin >> polyChoice;
			switch (polyChoice)
			{
			case 1:
				
				break;

			case 2:
				break;

			case 3:
				break;

			case 4:
				runningPoly = false;
				break;
			}
			break;
			}


		case 3:
			result = calculator();
			break;

		case 4:
			isRunning = false;
			break;

		default:
			cout << "I SAID 1, 2, 3 OR 4!!!\n";
			cout << "please try again ^^\n";
			cin.clear(); 
			cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
			
		}
	}
	
	return 0;

}


/// <summary>
/// takes the factorial of a number
/// </summary>
/// <param name="n"></param>
/// <returns></returns>
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



