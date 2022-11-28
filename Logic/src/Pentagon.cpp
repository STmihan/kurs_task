#include "../include/Pentagon.h"

#include <iostream>
#include <ostream>

double Pentagon::perimeter() const
{
	return rand();
}

Rectangle Pentagon::getBoundBox() const
{
	return Rectangle(
		Vector2(position().X - width() / 2, position().Y + height() / 2),
		Vector2(position().X + width() / 2, position().Y - height() / 2),
		Vector2(position().X + width() / 2, position().Y + height() / 2),
		Vector2(position().X - width() / 2, position().Y - height() / 2)
	);
}

void Pentagon::printAsJSON() const
{
	std::cout << toString() << std::endl;
}

std::string Pentagon::toString() const
{
	std::string result;
	result += "{\n";
	result += "\t\"x\":";
	result += std::to_string(position().X);
	result += ",\n";
	result += "\t\"y\":";
	result += std::to_string(position().Y);
	result += ",\n";
	result += "\t\"width\":";
	result += std::to_string(width());
	result += ",\n";
	result += "\t\"height\":";
	result += std::to_string(height());
	result += "\n}";
	return result;
}
