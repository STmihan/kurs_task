#pragma once
#include "Rectangle.h"

class Figure
{
	virtual double    Perimeter() const = 0;
	virtual Rectangle GetBoundBox() const = 0;
	virtual void      PrintAsJSON() const = 0;
};

