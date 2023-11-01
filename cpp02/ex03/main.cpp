#include "Fixed.h"
#include "Point.h"
#include <iostream>

float det(Point const &u, Point const &v) { return (u.getX().toFloat() * v.getY().toFloat()) - (u.getY().toFloat() * v.getX().toFloat()); }

bool bsp(Point const a, Point const b, Point const c, Point const point) {
	Point v1 = a - b;
	Point v2 = c - b;
	const Point &v0 = a;

	float coef1 = (det(point, v2) - det(v0, v2)) / det(v1, v2);
	float coef2 = (det(point, v1) - det(v0, v1)) / det(v1, v2);

	if (coef1 > 0.0f && coef2 > 0.0f && (coef1 + coef2 < 1.0f))
		return true;
	else
		return false;
}

int main(void) {
	Point a(0, 0);
	Point b(5, 0);
	Point c(0, 5);
	Point point(10, 1);

	bool ret = bsp(a, b, c, point);
	std::cout << ret;
	return 0;
}
