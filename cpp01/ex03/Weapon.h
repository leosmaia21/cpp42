#include <string>

#ifndef WEAPON_H
#define WEAPON_H

class Weapon {
  public:
	Weapon();
	Weapon(std::string);
	// Weapon(const Weapon &);
	// Weapon &operator=(const Weapon &);
	~Weapon();
	const std::string &getType();
	void setType(std::string str);

  private:
	std::string type;
};
#endif // !WEAPON_H
