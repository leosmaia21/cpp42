
class Fixed {
  public:
	Fixed();
	Fixed(const Fixed &);
	Fixed &operator=(const Fixed &);
	~Fixed();
	int getRawBits() const;
	void setRawBits(int const raw);

  private:
	int fp;
	static const int fb = 8;
};
