#pragma once
#include <string>

#include "Figure.h"

#define PI 3.14

class Circle : public Figure
{
public:
	Circle(int x, int y, double radius)
		: Figure(x, y),
		  _radius(radius)
	{
	}

	double radius() const
	{
		return _radius;
	}

	double diameter() const
	{
		return 2 * _radius;
	}

	double perimeter() const override;
	Rectangle getBoundBox() const override;
	void printAsJSON() const override;

private:
	double _radius;
	std::string toString() const;
};
