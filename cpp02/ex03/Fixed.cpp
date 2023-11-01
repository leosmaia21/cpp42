#include "Fixed.h"
#include <iostream>
#include <math.h>

Fixed::Fixed() {
	// std::cout << "Default constructor called\n";
	fp = 0;
}

Fixed::Fixed(const int value) {
	// std::cout <<value << " Int constructor called\n";
	fp = value * (1 << fb);
}

Fixed::Fixed(const float value) {
	// std::cout << "Float constructor called\n";
	fp = roundf(value * (1 << fb));
}
Fixed::~Fixed() { 
	// std::cout<< " Destructor called\n";
}

Fixed::Fixed(const Fixed &other) {
	// std::cout << "Copy constructor called\n";

	*this = other;
}
Fixed &Fixed::operator=(const Fixed &other) {
	// std::cout << "Copy assignment operator called\n";
	fp = other.fp;
	return (*this);
};

int Fixed::getRawBits() const {
	// std::cout << "getRawBits member function called\n";
	return fp;
}

void Fixed::setRawBits(int const raw) { fp = raw; }

float Fixed::toFloat() const { return ((float)fp / (float)(1 << fb)); }

int Fixed::toInt() const { return (this->fp >> Fixed::fb); }

std::ostream &operator<<(std::ostream &os, Fixed const &src) {
	os << src.toFloat();
	return (os);
}

int Fixed::operator>(const Fixed &other) const { return this->fp > other.fp; };

int Fixed::operator<(const Fixed &other) const { return this->fp < other.fp; };

int Fixed::operator<=(const Fixed &other) const { return this->fp <= other.fp; };

int Fixed::operator>=(const Fixed &other) const { return this->fp >= other.fp; };

int Fixed::operator==(const Fixed &other) const { return this->fp == other.fp; };

int Fixed::operator!=(const Fixed &other) const { return this->fp != other.fp; };

Fixed Fixed::operator+(const Fixed &other) { return this->toFloat() + other.toFloat(); };
Fixed Fixed::operator-(const Fixed &other) { return this->toFloat() - other.toFloat(); };
Fixed Fixed::operator*(const Fixed &other) { return this->toFloat() * other.toFloat(); };
Fixed Fixed::operator/(const Fixed &other) { return this->toFloat() / other.toFloat(); };

Fixed &Fixed::operator++() {
	this->fp++;
	return (*this);
};
Fixed &Fixed::operator--() {
	this->fp--;
	return (*this);
};

Fixed Fixed::operator--(int) // postfix
{
	Fixed temp = *this;
	this->fp--;
	return (temp);
}
Fixed Fixed::operator++(int) // postfix
{
	Fixed temp = *this;
	this->fp++;
	return (temp);
}
Fixed &Fixed::min(Fixed &f1, Fixed &f2) { return f1 < f2 ? f1 : f2; }

Fixed &Fixed::max(Fixed &f1, Fixed &f2) { return f1 > f2 ? f1 : f2; }

const Fixed &Fixed::min(const Fixed &f1, const Fixed &f2) { return f1 < f2 ? f1 : f2; }

const Fixed &Fixed::max(const Fixed &f1, const Fixed &f2) { return f1 > f2 ? f1 : f2; }
