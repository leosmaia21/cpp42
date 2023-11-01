#include <iostream>
#include <string>
#include "Weapon.h"

Weapon::Weapon() {}

Weapon::Weapon(std::string str) { this->type = str; }

Weapon::~Weapon() {}

const std::string &Weapon::getType() { return this->type; }

void Weapon::setType(std::string str) { this->type = str; }
