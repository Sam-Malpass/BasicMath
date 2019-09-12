#include "BasicMath.h"
using namespace BasicMath;

/*
	Functions for the coordinate class
*/

// a is the value of the x-coordinate, b is the value of the y-coordinate
void point::setVals(double a, double b)
{
	point::x = a;
	point::y = b;
}
void point::setX(double a)
{
	point::x = a;
}
void point::setY(double b)
{
	point::y = b;
}
double point::getX()
{
	return point::x;
}
double point::getY()
{
	return point::y;
}

/*
	Functions for the CoreFuncs class
*/

//Basic functions for basic mathematics
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

//Bring number a to the power of b
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

//Perform the quadratic formula where a is the coefficient of X^2, b is the coefficient of X and c is the constant
std::vector<double> AlgebraFuncs::QuadraticFormula(double a, double b, double c)
{
	std::vector<double> data;
	double x1 = ((-b + AlgebraFuncs::Discriminant(a, b, c)) / (2 * a));
	double x2 = ((-b - AlgebraFuncs::Discriminant(a, b, c)) / (2 * a));
	data.push_back(x1);
	data.push_back(x2);
	return data;
}
//Calculate the Discriminant of a quadratic equation, where a is the coefficient of X^2, b is the coefficient of X and c is the constant
double AlgebraFuncs::Discriminant(double a, double b, double c)
{
	return AdvFuncs::Power(b, 2) - (4 * a * c);
}
//Calculates and returns the Vertex of the Parabola for a quadratic equation, where a is the coefficient of X^2, b is the coefficient of X and c is the constant
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

/*
	Finds the angle between the hypotenuse and adjacent
*/

//Uses a as opposite and b as hypotenuse
double TrigFuncs::SinAng(double a, double b)
{
	return asin(a / b);
}
//Uses a as adjacent and b as hypotenuse
double TrigFuncs::CosAng(double a, double b)
{
	return acos(a / b);
}
//Uses a as opposite and b as adjacent
double TrigFuncs::TanAng(double a, double b)
{
	return atan(a / b);
}

/*
	Functions for the VectorFuncs class
*/

//Calculates from vector a to vector b
std::vector<double> VectorFuncs::Vec2Vec(std::vector<double> a, std::vector<double> b)
{
	std::vector<double> ab;
	if (a.size() != b.size())
	{
		return ab;
	}
	for (int i = 0; i < a.size(); i++)
	{
		ab.push_back((b[i] - a[i]));
	}
	return ab;
}
//Calculates the magnitude of a vector
double VectorFuncs::VecMag(std::vector<double> a)
{
	double tmp = 0;
	for (int i = 0; i < a.size(); i++)
	{
		tmp = tmp + AdvFuncs::Power(a[i], 2);
	}
	return sqrt(tmp);
}
//Calculates the square magnitude of the vector
double VectorFuncs::VecMagSq(std::vector<double> a)
{
	return AdvFuncs::Power(VectorFuncs::VecMag(a), 2);
}
//Adds two vectors together
std::vector<double> VectorFuncs::VecAdd(std::vector<double> a, std::vector<double> b)
{
	std::vector<double> ab;
	if (a.size() != b.size())
	{
		return ab;
	}
	for (int i = 0; i < a.size(); i++)
	{
		ab.push_back((a[i] + b[i]));
	}
	return ab;
}
//Multiplys a vector by a scalar value
std::vector<double> VectorFuncs::VecMult(double a, std::vector<double> b)
{
	std::vector<double> vec;
	for (int i = 0; i < b.size(); i++)
	{
		vec.push_back(a * b[i]);
	}
	return vec;
}
double VectorFuncs::DotProd(std::vector<double> a, std::vector<double> b)
{
	double ans = 0;
	if (a.size() != b.size())
	{
		return -1;
	}
	for (int i = 0; i < a.size(); i++)
	{
		ans = ans + (a[i] * b[i]);
	}
	return ans;
}


/*
	Functions for the GeometryFuncs class
*/
//Uses a as the length of a side
double GeometryFuncs::SquareArea(double a)
{
	return a * a;
}
//Uses a as a width and b as a height
double GeometryFuncs::RectangleArea(double a, double b)
{
	return a * b;
}
//Uses a as the base and b as the height
double GeometryFuncs::TriangleArea(double a, double b)
{
	return ((a * b) / 2);
}
//Uses a as the large diagonal and b as the small diagonal
double GeometryFuncs::RhombusArea(double a, double b)
{
	return ((a * b) / 2);
}
//Uses a as the large side, b as the small side and c as the height
double GeometryFuncs::TrapezoidArea(double a, double b, double c)
{
	return (((a + b) / 2) * c);
}
//Uses a as the perimeter and a as the apothem
double GeometryFuncs::PolygonArea(double a, double b)
{
	return ((a / 2) * b);
}
//Uses a as the radius
double GeometryFuncs::CircleArea(double a)
{
	return (PI * AdvFuncs::Power(a, 2));
}
//Uses a as the radius and b as the slant height
double GeometryFuncs::ConeArea(double a, double b)
{
	return ((PI * a) * b);
}
//Uses a as the radius
double GeometryFuncs::SphereArea(double a)
{
	return (4 * (PI * AdvFuncs::Power(a, 2)));
}
//Uses a as the surface area of one side of the cube
double GeometryFuncs::CubeVol(double a)
{
	return AdvFuncs::Power(a, 3);
}
//Uses a as the length, b as the width and c as the height
double GeometryFuncs::CuboidVol(double a, double b, double c)
{
	return a * b * c;
}
//Uses a as the surface area of the base and b as the height of the prism
double GeometryFuncs::RegPrismVol(double a, double b)
{
	return a * b;
}
//Uses a as the radius of the circular base and b as the height of the cyclinder
double GeometryFuncs::CylinderVol(double a, double b)
{
	return (PI * AdvFuncs::Power(a, 2)) * b;
}
//Uses a as the area of the base and b as the height of the cone
double GeometryFuncs::ConeVol(double a, double b)
{
	return (((1 / 3) * a) * b);
}
//Uses a as the radius of the sphere
double GeometryFuncs::SphereVol(double a)
{
	return (4 / 3) * PI * AdvFuncs::Power(a, 3);
}
//Uses a as the number of sides of the polygon
double GeometryFuncs::IntAngPoly(double a) 
{
	return (a - 2) * 180;
}
//Uses a as one point and b as another point
double GeometryFuncs::PointDist(point a, point b)
{
	return sqrt(AdvFuncs::Power((a.getX() - b.getX()), 2) + AdvFuncs::Power((a.getY() - b.getY()), 2));
}
//Uses a as one point and b as another point
point GeometryFuncs::MidPoint(point a, point b)
{
	point mid;
	mid.setVals(((a.getX() + b.getX()) / 2), ((a.getY() + b.getY()) / 2));
	return mid;
}
