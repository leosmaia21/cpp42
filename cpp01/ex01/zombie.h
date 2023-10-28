#include <string>

class Zombie {
public:
  Zombie();
  Zombie(std::string);
  Zombie(const Zombie &);
  Zombie &operator=(const Zombie &);
  ~Zombie();
  void announce();
  void setName(std::string name);

private:
  std::string name;
};
