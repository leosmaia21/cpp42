#include <iostream>
#include <string>

#define cout std::cout

class ClapTrap {
  public:
	ClapTrap(std::string &);
	ClapTrap(const ClapTrap &);
	ClapTrap &operator=(const ClapTrap &);
	~ClapTrap();
	void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

  private:
	std::string name;
	int32_t hitPoints;
	int32_t energyPoints;
	int32_t attackDamage;
};

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
}

void ClapTrap::beRepaired(unsigned int amount){
	hitPoints -= amount;
	this->energyPoints--;
	// cout << "ClapTrap " << this->name << 
}
