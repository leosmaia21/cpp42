#include "Fixed.h"
class Point {
  public:
	Point();
	Point(float, float);
	Point(const Point &);
	Point &operator=(const Point &);
	Point operator-(const Point &) const;
	~Point();
	Fixed getX()const;
	Fixed getY()const;

  private:
	Fixed x;
	Fixed y;
};
