#pragma once
#include <vector>
#include <cmath>
#define PI 3.14159265359
/* BasicMath.h by Samuel John Malpass*/

namespace BasicMath
{
	class point
	{
		double x;
		double y;
	public:
		double getX();
		double getY();
		void setX(double a);
		void setY(double b);
		void setVals(double a, double b);
	};
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

		//Function declaration for Discriminant
		static double Discriminant(double a, double b, double c);

		//Function declaration for ParabolaVertex
		static std::vector<double> ParabolaVertex(double a, double b, double c);
	};

	class TrigFuncs
	{
	public:
		//Function declaration for SinAng
		static double SinAng(double a, double b);

		//Function declaration for CosAng
		static double CosAng(double a, double b);

		//Function declaration for TanAng
		static double TanAng(double a, double b);
	};

	class VectorFuncs
	{
	public:
		//Function declaration for Vec2Vec
		static std::vector<double> Vec2Vec(std::vector<double> a, std::vector<double> b);

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

		//Function declaration for CubeVol
		static double CubeVol(double a);

		//Function declaration for CuboidVol
		static double CuboidVol(double a, double b, double c);

		//Function declaration for RegPrismVol
		static double RegPrismVol(double a, double b);

		//Function declaration for CylinderVol
		static double CylinderVol(double a, double b);

		//Function declaration for ConeVol
		static double ConeVol(double a, double b);

		//Function declaration for SphereVol
		static double SphereVol(double a);

		//Function declaration for IntAngPoly
		static double IntAngPoly(double a);

		//Function declaration for PointDist
		static double PointDist(point a, point b);

		//Function declaration for MidPoint
		static point MidPoint(point a, point b);
	};
}