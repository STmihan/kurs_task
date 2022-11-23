#pragma once
class Rectangle
{
public:
	Rectangle(double width, double height)
		: _width(width),
		  _height(height)
	{
	}

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
};
