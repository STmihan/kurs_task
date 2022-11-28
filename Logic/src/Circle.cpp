#include "../include/Circle.h"

#include <iostream>
#include <ostream>

double Circle::perimeter() const
{
	return 2 * PI * _radius;
}

Rectangle Circle::getBoundBox() const
{
	return Rectangle(
		Vector2(position().X - _radius, position().Y - _radius),
		Vector2(position().X + _radius, -position().Y - _radius),
		Vector2(position().X + _radius, -position().Y + _radius),
		Vector2(position().X - _radius, -position().Y - _radius));
}

void Circle::printAsJSON() const
{
	std::cout << toString() << std::endl;
}

std::string Circle::toString() const
{
	std::string result = "";
	result += "{\n";
	result += "\t\"x\":";
	result += std::to_string(position().X);
	result += ",\n";
	result += "\t\"y\":";
	result += std::to_string(position().Y);
	result += ",\n";
	result += "\t\"radius\":";
	result += std::to_string(radius());
	result += "\n}";
	return result;
}
