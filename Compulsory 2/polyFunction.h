#pragma once
#define _POLYFUNCTON_
#include <iostream>
#include "Math.h"
using namespace std;

int functionP1(int firstPoly[4]);
int functionP2(int secondPoly[4]);

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
		cout << firstPoly[i] << "x^" << j2 << " + ";
	}
	cout << firstPoly[3];
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
		cout << secondPoly[i] << "x^" << k2 << " + ";
	}
	cout << secondPoly[3];
	cout << "\n";
	cout << "\n";

	functionP1(firstPoly);
	functionP2(secondPoly);

	return 0;

};

int functionP1(int firstPoly[4])
{
	cout << "Poly 1: ";
	int j3 = 3;
	for (int i = 0; i < 3; i++, j3--)
	{
		cout << firstPoly[i] << "x^" << j3 << " + ";
	}
	cout << firstPoly[3];
	cout << "\n";

	return 0;
}

int functionP2(int secondPoly[4])
{
	cout << "Poly 2: ";
	int k3 = 3;
	for (int i = 0; i < 3; i++, k3--)
	{
		cout << secondPoly[i] << "x^" << k3 << " + ";
	}
	cout << secondPoly[3];
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
