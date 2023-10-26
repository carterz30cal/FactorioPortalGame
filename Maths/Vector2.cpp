#include "Vector2.h"
Vector2::Vector2() {
	this->x = 0;
	this->y = 0;
}
Vector2::Vector2(double x) {
	this->x = x;
}
Vector2::Vector2(double x, double y) {
	this->x = x;
	this->y = y;
}
Vector2::Vector2(const Vector2& v) {
	this->x = v.x;
	this->y = v.y;
}


Vector2 Vector2::operator+(const Vector2& rhs) const
{
	if (this == 0) return Vector2();

	double nx = x + rhs.x;
	double ny = y + rhs.y;
	return Vector2(nx, ny);
}

double Vector2::get_x() {
	return this->x;
}
double Vector2::get_y() {
	return this->y;
}
