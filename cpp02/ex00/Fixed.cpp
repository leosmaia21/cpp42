#include "Fixed.h"
#include <iostream>

Fixed::Fixed() {
	std::cout << "Default constructor called\n";
	fp = 0;
}

Fixed::~Fixed() { std::cout << "Destructor called\n"; }

Fixed::Fixed(const Fixed &other) {
	std::cout << "Copy constructor called\n";

	*this = other;
}
Fixed &Fixed::operator=(const Fixed &other) {
	std::cout << "Copy assignment operator called\n";
	fp = other.fp;
	return (*this);
};

int Fixed::getRawBits() const {
	std::cout << "getRawBits member function called\n";
	return fp;
}

void Fixed::setRawBits(int const raw) { fp = raw; }
