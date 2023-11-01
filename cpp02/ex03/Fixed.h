
#include <ostream>
#ifndef FIXED_H
#define FIXED_H

class Fixed {
  public:
	Fixed();
	Fixed(const Fixed &);
	Fixed(const int value);
	Fixed(const float value);
	Fixed &operator=(const Fixed &);
	~Fixed();
	int getRawBits() const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;
	int operator>(const Fixed &)const;
	int operator<(const Fixed &)const;
	int operator<=(const Fixed &)const;
	int operator>=(const Fixed &)const;
	int operator==(const Fixed &)const;
	int operator!=(const Fixed &)const;
	Fixed operator+(const Fixed &);
	Fixed operator-(const Fixed &);
	Fixed operator*(const Fixed &);
	Fixed operator/(const Fixed &);
	Fixed &operator++();
	Fixed &operator--();
	Fixed operator++(int);
	Fixed operator--(int);
	static Fixed &max(Fixed &, Fixed &);
	static Fixed &min(Fixed &, Fixed &);
	static const Fixed &max(const Fixed &, const Fixed &);
	static const Fixed &min(const Fixed &, const Fixed &);

  private:
	int fp;
	static const int fb = 8;
};

std::ostream &operator<<(std::ostream &os, Fixed const &src);
#endif // !FIXED_H
