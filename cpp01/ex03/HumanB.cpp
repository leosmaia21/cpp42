#include "HumanB.h"
#include <iostream>

HumanB::HumanB(std::string name) { this->name = name; }

HumanB::~HumanB() {}

std::string HumanB::getName() { return name;}

void HumanB::attack() { std::cout << name << " attacks with their " << weapon->getType() << "\n"; }

void HumanB::setWeapon(Weapon &type) { this->weapon = &type; }
