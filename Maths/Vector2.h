#pragma once
struct Vector2
{
public:
	Vector2(double x, double y);
	Vector2(double x);
	Vector2(const Vector2& v);
	Vector2();
	Vector2 operator +(const Vector2& rhs) const;
	double get_x();
	double get_y();
private:
	double x = 0;
	double y = 0;
};

