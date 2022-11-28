#pragma once
#include "Vector2.h"
class Rectangle
{
public:
	Rectangle(const Vector2& top_left, const Vector2& bottom_right, const Vector2& top_right,
		const Vector2& bottom_left);

	Rectangle(const Vector2& position, double width, double height);

private:
	Vector2 _position;

	Vector2 _topLeft;
	Vector2 _bottomRight;
	Vector2 _topRight;
	Vector2 _bottomLeft;

	double _width;
	double _height;
};
