#pragma once
#include <string>

#include "Figure.h"

class Pentagon :
    public Figure
{
public:
	Pentagon(int x, int y, double width, double height)
		: Figure(x, y),
		  _width(width),
		  _height(height)
	{
	}

	double perimeter() const override;
	Rectangle getBoundBox() const override;
	void printAsJSON() const override;

	double width() const
	{
		return _width;
	}

	double height() const
	{
		return _height;
	}

private:
	double _width;
	double _height;
	std::string toString() const;
};

