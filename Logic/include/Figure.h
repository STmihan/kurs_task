#pragma once
#include "Rectangle.h"

class Figure
{
public:
	Figure(int x, int y)
		: _position(x, y)
	{
	}

	Vector2 position() const
	{
		return _position;
	}

	virtual double    perimeter() const = 0;
	virtual Rectangle getBoundBox() const = 0;
	virtual void      printAsJSON() const = 0;
private:
	Vector2 _position;
};

