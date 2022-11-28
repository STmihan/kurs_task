#include "../include/Vector2.h"
#include "../include/Rectangle.h"

Rectangle::Rectangle(const Vector2& top_left, const Vector2& bottom_right, const Vector2& top_right,
                     const Vector2& bottom_left): _topLeft(top_left),
                                                  _bottomRight(bottom_right),
                                                  _topRight(top_right),
                                                  _bottomLeft(bottom_left),
                                                  _width(bottom_right.X - top_left.X),
                                                  _height(bottom_right.Y - top_left.Y),
                                                  _position(Vector2((top_left.X + bottom_right.X) / 2,
                                                                    (top_left.Y + bottom_right.Y) / 2))
{
}

Rectangle::Rectangle(const Vector2& position, double width, double height): _position(position),
                                                                            _topLeft(Vector2(position.X - width / 2,
	                                                                            position.Y + height / 2)),
                                                                            _bottomRight(position.X + width / 2,
	                                                                            position.Y - height / 2),
                                                                            _topRight(position.X + width / 2,
	                                                                            position.Y + height / 2),
                                                                            _bottomLeft(position.X - width / 2,
	                                                                            position.Y - height / 2),
                                                                            _width(width),
                                                                            _height(height)
{
}
