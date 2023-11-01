#include "HumanA.h"
#include <iostream>


HumanA::HumanA(std::string name, Weapon &weapon) : weapon(weapon){
	this->name = name;
	// this->weapon = weapon;
}

HumanA::~HumanA() {}

void HumanA::attack() { std::cout << name << " attacks with their " << weapon.getType() << "\n"; }

std::string HumanA::getName() { return name; }
