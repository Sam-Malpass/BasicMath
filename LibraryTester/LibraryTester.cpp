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
	vector<double> veca;
	veca.push_back(1);
	veca.push_back(0);
	veca.push_back(3);
	vector<double> vecb;
	vecb.push_back(-1);
	vecb.push_back(4);
	vecb.push_back(2);
	vector<double> res = VectorFuncs::Vec2Vec(veca, vecb);
	cout << "A = (1, 0 , 3) and B = (-1, 4, 2) so A -> B = (" << res[0] << ", " << res[1] << ", " << res[2] << ")" << endl;
	cout << "Magnitude of A is = " << VectorFuncs::VecMag(veca) << endl;
	vector<vector<double>> tmpA = { {1.0, 2, 3}, {4, 5, 6} };
	vector<vector<double>> tmpB = { {7, 8}, {9, 10}, {11, 12} };
	vector<vector<double>> result = Matrixfuncs::MatrixMult(tmpA, tmpB);
	cout << "End of test" << endl;
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
