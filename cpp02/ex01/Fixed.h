
#include <ostream>
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

  private:
	int fp;
	static const int fb = 8;
};


std::ostream& operator<<(std::ostream& os, Fixed const& src);

