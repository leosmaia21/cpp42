
#include "zombie.h"
#include <iostream>
#include <string>

Zombie *newZombie(std::string name) {
  Zombie *z = new Zombie(name);
  return z;
}

void randomChump(std::string name) {
  Zombie z = Zombie(name);
  z.announce();
}

Zombie *zombieHorde(int N, std::string name);

Zombie *newZombie(std::string name);

int main() {

  Zombie *z = newZombie("ola");

  z->announce();
  delete z;

  randomChump("susana");

  Zombie *zz = zombieHorde(10, "susana");

  for (int i = 0; i < 10; i++)
    zz[i].announce();

  delete[] zz;

  return 0;
}
