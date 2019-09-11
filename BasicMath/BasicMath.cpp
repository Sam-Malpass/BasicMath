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
	double x1 = ((-b + AlgebraFuncs::Discriminant(a, b, c)) / (2 * a));
	double x2 = ((-b - AlgebraFuncs::Discriminant(a, b, c)) / (2 * a));
	data.push_back(x1);
	data.push_back(x2);
	return data;
}
double AlgebraFuncs::Discriminant(double a, double b, double c)
{
	return AdvFuncs::Power(b, 2) - (4 * a * c);
}
std::vector<double> AlgebraFuncs::ParabolaVertex(double a, double b, double c)
{
	std::vector<double> vals;
	double v1 = -b / (2 * a);
	double v2 = -AlgebraFuncs::Discriminant(a, b, c)  / (4 * a);
	vals.push_back(v1);
	vals.push_back(v2);
	return vals;
}

/*
	Functions for the TrigFuncs Class
*/
double TrigFuncs::SinAng(double a, double b)
{
	return asin(a / b);
}
double TrigFuncs::CosAng(double a, double b)
{
	return acos(a / b);
}
double TrigFuncs::TanAng(double a, double b)
{
	return atan(a / b);
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
double GeometryFuncs::CubeVol(double a)
{
	return AdvFuncs::Power(a, 3);
}
double GeometryFuncs::CuboidVol(double a, double b, double c)
{
	return a * b * c;
}
double GeometryFuncs::RegPrismVol(double a, double b)
{
	return a * b;
}
double GeometryFuncs::CylinderVol(double a, double b)
{
	return (PI * AdvFuncs::Power(a, 2)) * b;
}
double GeometryFuncs::ConeVol(double a, double b)
{
	return (((1 / 3) * a) * b);
}
double GeometryFuncs::SphereVol(double a)
{
	return (4 / 3) * PI * AdvFuncs::Power(a, 3);
}
