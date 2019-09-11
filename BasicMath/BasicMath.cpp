#include "BasicMath.h"
using namespace BasicMath;

/*
	Functions for the CoreFuncs class
*/
double CoreFuncs::Add(double a, double b)
{
	return a + b;
}
double CoreFuncs::Subtract(double a, double b)
{
	return a - b;
}
double CoreFuncs::Multiply(double a, double b)
{
	return a * b;
}
double CoreFuncs::Divide(double a, double b)
{
	return a / b;
}

/*
	Functions for the AdvFuncs class
*/
double AdvFuncs::Power(double a, double b)
{
	for (int i = 0; i < b; i++) {
		a = a * a;
	}
	return a;
}

/*
	Functions for the AlgebraFuncs class
*/
std::vector<double> AlgebraFuncs::QuadraticFormula(double a, double b, double c)
{
	std::vector<double> data;
	double x1 = ((-b + sqrt(AdvFuncs::Power(b, 2) - 4 * a * c)) / (2 * a));
	double x2 = ((-b - sqrt(AdvFuncs::Power(b, 2) - 4 * a * c)) / (2 * a));
	data.push_back(x1);
	data.push_back(x2);
	return data;
}
