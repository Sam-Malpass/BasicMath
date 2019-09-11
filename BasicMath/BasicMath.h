#pragma once
#include <vector>
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
}