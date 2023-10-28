#include <iostream>
#include <string>
class Weapon {
public:
	Weapon();
	Weapon(std::string);
	Weapon(const Weapon &);
	Weapon &operator=(const Weapon &);
	~Weapon();
	const std::string& getType();
	void setType(std::string str);
	std::string type;

private:
	
};

Weapon::Weapon(){}

Weapon::Weapon(std::string str) {
	this->type = str;
}

Weapon::~Weapon() {
}

const std::string& Weapon::getType(){
	return this->type;
}

void Weapon::setType(std::string str){
	this->type = str;
}
int main (int argc, char *argv[]) {
	Weapon w = Weapon();

	std::string x = w.getType();
	x = "ola";

	std::cout<<w.type;

	return 0;
}
