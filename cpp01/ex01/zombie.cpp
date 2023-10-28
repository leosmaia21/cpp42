#include "zombie.h"
#include <iostream>
#include <string>
Zombie::Zombie(std::string name) {
	this->name = name;
}

Zombie::~Zombie() {}

Zombie::Zombie() {
}
void Zombie::setName(std::string name) {
	this->name = name;
}
void Zombie::announce(){
	std::cout<< name<< ":  BraiiiiiiinnnzzzZ...\n";
}
