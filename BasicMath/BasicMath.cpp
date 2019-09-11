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
	double c = a;
	for (int i = 1; i < b; i++) {
		c = c * a;
	}
	return c;
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

/*
	Functions for the GeometryFuncs class
*/
double GeometryFuncs::SquareArea(double a)
{
	return a * a;
}
double GeometryFuncs::RectangleArea(double a, double b)
{
	return a * b;
}
double GeometryFuncs::TriangleArea(double a, double b)
{
	return ((a * b) / 2);
}
double GeometryFuncs::RhombusArea(double a, double b)
{
	return ((a * b) / 2);
}
double GeometryFuncs::TrapezoidArea(double a, double b, double c)
{
	return (((a + b) / 2) * c);
}
double GeometryFuncs::PolygonArea(double a, double b)
{
	return ((a / 2) * b);
}
double GeometryFuncs::CircleArea(double a)
{
	return (PI * AdvFuncs::Power(a, 2));
}
double GeometryFuncs::ConeArea(double a, double b)
{
	return ((PI * a) * b);
}
double GeometryFuncs::SphereArea(double a)
{
	return (4 * (PI * AdvFuncs::Power(a, 2)));
}
