#pragma once
#include <vector>
#define PI 3.14159265359
/* BasicMath.h by Samuel John Malpass*/

namespace BasicMath
{
	class CoreFuncs
	{
	public:
		//Function declaration for Add
		static double Add(double a, double b);
		
		//Function declaration for Subtract
		static double Subtract(double a, double b);

		//Function declaration for Multiply
		static double Multiply(double a, double b);

		//Function declaration for Divide
		static double Divide(double a, double b);
	};

	class AdvFuncs
	{
	public:
		//Function declaration for Power
		static double Power(double a, double b);
	};

	class AlgebraFuncs
	{
	public:
		//Function declaration for Quadratic Formula
		static std::vector<double> QuadraticFormula(double a, double b, double c);
	};

	class GeometryFuncs
	{
	public:
		//Function declaration for SquareArea
		static double SquareArea(double a);

		//Function declaration for RectangleArea
		static double RectangleArea(double a, double b);

		//Function declaration for TriangleArea
		static double TriangleArea(double a, double b);

		//Function declaration for RhombusArea
		static double RhombusArea(double a, double b);

		//Function declaration for TrapezoidArea
		static double TrapezoidArea(double a, double b, double c);

		//Function declaration for PolygonArea
		static double PolygonArea(double a, double b);

		//Function declaration for CircleArea
		static double CircleArea(double a);

		//Function declaration for ConeArea
		static double ConeArea(double a, double b);

		//Function declaration for SphereArea
		static double SphereArea(double a);
	};
}