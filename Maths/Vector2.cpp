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
Vector2 Vector2::add(Vector2& v1, Vector2& v2) {
	return Vector2(v1.get_x() + v2.get_x(), v1.get_y() + v2.get_y());
}
Vector2 Vector2::multiply(Vector2& v, double m) {
	return Vector2(v.get_x() * m, v.get_y() * m);
}

double Vector2::get_x() {
	return this->x;
}
double Vector2::get_y() {
	return this->y;
}
