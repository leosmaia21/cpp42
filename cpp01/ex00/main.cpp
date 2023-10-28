
#include <iostream>
#include <string>
#include "zombie.h"

Zombie *newZombie(std::string name) {
  Zombie *z = new Zombie(name);
  return z;
}

void randomChump(std::string name) {
  Zombie z = Zombie(name);
  z.announce();
}

Zombie *newZombie(std::string name);

int main() {

  Zombie *z = newZombie("ola");

  z->announce();
  delete z;

  randomChump("sadfw");

  return 0;
}
