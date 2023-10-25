#pragma once
struct Vector2
{
public:
	Vector2(double x, double y);
	Vector2(double x);
	Vector2();

	static Vector2 add(Vector2& v1, Vector2& v2);
	static Vector2 multiply(Vector2& v, double m);
	double get_x();
	double get_y();
private:
	double x = 0;
	double y = 0;
};

