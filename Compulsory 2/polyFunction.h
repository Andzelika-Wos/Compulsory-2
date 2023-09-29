#pragma once
#define _POLYFUNCTON_
#include <iostream>
#include "Math.h"
using namespace std;

int functionP1(int firstPoly[4]);
int functionP2(int secondPoly[4]);


/// <summary>
/// main function for 3rd degree polynomials, which lets the user input numbers they want their polynomials to have and thereafter prints the input with exponents
/// </summary>
/// <param name="firstPoly"></param>
/// <param name="secondPoly"></param>
/// <returns></returns>
int polyFunction(int firstPoly[4], int secondPoly[4])
{

	int result;
	int a, b, c, d;
	int j = 3;
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
		cout << "(" << firstPoly[i] << "x^" << j2 << ") + ";
	}
	cout << "(" << firstPoly[3] << ")";
	cout << "\n";
	cout << "\n";

	int a2, b2, c2, d2;
	int k = 3;
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
		cout << "(" << secondPoly[i] << "x^" << k2 << ") + ";
	}
	cout << "(" << secondPoly[3] << ")";
	cout << "\n";
	cout << "\n";

	functionP1(firstPoly);
	functionP2(secondPoly);

	return 0;

};

/// <summary>
/// prints and defines the first polynomial with user input
/// </summary>
/// <param name="firstPoly"></param>
/// <returns></returns>
int functionP1(int firstPoly[4])
{
	cout << "Poly 1: ";
	int j3 = 3;
	for (int i = 0; i < 3; i++, j3--)
	{
		cout << "(" << firstPoly[i] << "x^" << j3 << ") + ";
	}
	cout << "(" << firstPoly[3] << ")";
	cout << "\n";

	return 0;
}

/// <summary>
/// prints and defines the second polynomial with user input
/// </summary>
/// <param name="secondPoly"></param>
/// <returns></returns>
int functionP2(int secondPoly[4])
{
	cout << "Poly 2: ";
	int k3 = 3;
	for (int i = 0; i < 3; i++, k3--)
	{
		cout << "(" << secondPoly[i] << "x^" << k3 << ") + ";
	}
	cout <<  "(" << secondPoly[3] << ")";
	cout << "\n";

	return 0;
}

/// <summary>
/// adds two polynomials and prints the sum
/// </summary>
/// <param name="firstPoly"></param>
/// <param name="secondPoly"></param>
void addPoly(int firstPoly[4], int secondPoly[4]) 
{
	int a = firstPoly[0] + secondPoly[0];
	int b = firstPoly[1] + secondPoly[1];
	int c = firstPoly[2] + secondPoly[2];
	int d = firstPoly[3] + secondPoly[3];

	if (a != 0)
		cout << "(" << a << "x^3) + ";
	if (b != 0)
		cout << "(" << b << "x^2) + ";
	if (c != 0)
		cout << "(" << c << "x) + ";
	cout << "(" << d << ")\n";

}

/// <summary>
/// subtracts two polynomials and prints the sum
/// </summary>
/// <param name="firstPoly"></param>
/// <param name="secondPoly"></param>
void subtractPoly(int firstPoly[4], int secondPoly[4]) 
{
	int a = firstPoly[0] - secondPoly[0];
	int b = firstPoly[1] - secondPoly[1];
	int c = firstPoly[2] - secondPoly[2];
	int d = firstPoly[3] - secondPoly[3];

	if (a != 0)
		cout << "(" << a << "x^3) + ";
	if (b != 0)
		cout << "(" << b << "x^2) + ";
	if (c != 0)
		cout << "(" << c << "x) + ";
	cout << "(" << d << ")\n";

}

/// <summary>
/// tried to understand how to do the multiplying of the polynomilas but eventualy I gave up
/// </summary>
/// <param name="firstPoly"></param>
/// <param name="secondPoly"></param>
/// <returns></returns>
int *multiplyPoly(int firstPoly[4], int secondPoly[4])
{
	int *prod = new int[4 + 4 - 1];
	for (int i = 0; i < 4 + 4 - 1; i++) 
	{
		prod[i] = 0;
	}

	for (int i = 0; i < 3; i++) 
	{
		for (int j = 0; j < 3; j++) 
		{
			prod[i + j] += firstPoly[i] * secondPoly[j];
		}
	}
	return prod;
}

void printPoly(int functionP1(), int functionP2())
{
	functionP1() * functionP2();
	
}





