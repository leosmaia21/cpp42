#include "Fixed.h"
#include "Point.h"

Point::Point() : x(0), y(0) {}

Point::Point(float x, float y) : x(x), y(y) {
	// this->x = x;
	// this->y = y;
}

Point::~Point() {}

Point::Point(const Point &other) { *this = other; }

Point &Point::operator=(const Point &other) {
	this->x = other.x;
	this->y = other.y;
	return *this;
}

Point Point::operator-(Point const &other) const {
	Point ret(other.x.toFloat() - this->x.toFloat(), other.y.toFloat() - this->y.toFloat());
	// ret.x = other.x.toFloat() - this->x.toFloat();
	// ret.y = other.y.toFloat() - this->y.toFloat();
	return ret;
}

Fixed Point::getX() const {return this->x;}
Fixed Point::getY() const {return this->y;}
