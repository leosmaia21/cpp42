#include "zombie.h"
#include <iostream>
#include <string>
Zombie::Zombie(std::string name) {
	this->name = name;
}

Zombie::~Zombie() {
}

void Zombie::announce(){
	std::cout<< name<< ":  BraiiiiiiinnnzzzZ...\n";
}
