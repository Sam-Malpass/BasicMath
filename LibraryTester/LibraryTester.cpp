// LibraryTester.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "BasicMath.h"
#include <iostream>
using namespace std;
using namespace BasicMath;
int main()
{
	double a = 3;
	double b = 23;
	cout << "Testing the CoreFuncs functions..." << endl;
	double c;
	c = CoreFuncs::Add(a, b);
	cout << a << " + " << b << " = " << c << endl;
	c = CoreFuncs::Subtract(a, b);
	cout << a << " - " << b << " = " << c << endl;
	c = CoreFuncs::Multiply(a, b);
	cout << a << " * " << b << " = " << c << endl;
	c = CoreFuncs::Divide(a, b);
	cout << a << " / " << b << " = " << c << endl;
	cout << "Testing the AdvFuncs functions..." << endl;
	a = 2;
	b = 4;
	c = AdvFuncs::Power(a, b); 
	cout << a << " to the power of " << b << " is " << c << endl;
	cout << "Testing the AlgebraFuncs functions..." << endl;
	a = 1;
	b = 4;
	c = 3;
	vector<double> tst = AlgebraFuncs::QuadraticFormula(a, b, c);
	cout << "For equation X^2 + 4X + 3: X = " << tst[0] << " or X = " << tst[1];
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
