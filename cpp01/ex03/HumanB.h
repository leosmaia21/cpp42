#include "Weapon.h"
#ifndef HUMANB_H
#define HUMANB_H
class HumanB {
  public:
	HumanB(std::string);
	HumanB(const HumanB &){};
	~HumanB();
	void attack();
	void setWeapon(Weapon &type);
	std::string getName();

  private:
	std::string name;
	Weapon *weapon;
};
#endif // !HUMANB_H
