#pragma once
#define _CALCULATOR_
#include <iostream>
#include "Math.h"
using namespace std;

int calculator() 
{
	char cal;
	double numb1, numb2, result;
	
	cout << "enter the first number ";
	cin >> numb1;
	
	cout << "enter the operator you want(+,-,* or /) ";
	cin >> cal;
	
	cout << "enter the second number ";
	cin >> numb2;

	switch (cal) 
	{
	case '+':
		result = numb1 + numb2;
		break;
	
	case '-':
		result = numb1 - numb2;
		break;
	
	case'*':
		result = numb1 * numb2;
		break;
	
	case'/':
		if (numb2 != 0) 
		{
			result = numb1 / numb2;
		}
		else 
		{
			cout << "\n";
			cout << "dividing by 0 rlly? not posible\n";
			return 1;
		}
		break;

	}

	cout << "Result: " << result << endl;
	
	return 0;

}
