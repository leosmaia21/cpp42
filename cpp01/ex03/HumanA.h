#include "Weapon.h"

#ifndef HumanA_H
#define HumaA_H

class HumanA {
public:
	HumanA(std::string, Weapon&);
	~HumanA();
	void attack();
	std::string getName();

private:
	std::string name;
	Weapon &weapon;
	
};
#endif // !DEBUG
