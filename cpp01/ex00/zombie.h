#include <string>

class Zombie {
public:
  Zombie(std::string);
  Zombie(const Zombie &);
  Zombie &operator=(const Zombie &);
  ~Zombie();
  void announce();
  int x;

private:
  std::string name;
};
