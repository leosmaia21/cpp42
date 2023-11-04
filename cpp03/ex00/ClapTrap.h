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
