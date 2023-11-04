#include "ClapTrap.h"

ClapTrap::ClapTrap(std::string &name) : hitPoints(10), energyPoints(10), attackDamage(10) {
	this->name = name;
	cout << "Constructor called \n";
}

ClapTrap::~ClapTrap() {
	cout << "Destructor called \n";
}

void ClapTrap::attack(const std::string &target) {
	cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!";
	this->energyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount) {
	this->hitPoints -= amount;
	cout << "ClapTrap " << this->name << " has taken damage, it took: " << amount << "\n";
}

void ClapTrap::beRepaired(unsigned int amount) {
	hitPoints -= amount;
	this->energyPoints--;
	cout << "ClapTrap " << this->name << " has been repaired, it has: " << this->hitPoints << "\n";
}
