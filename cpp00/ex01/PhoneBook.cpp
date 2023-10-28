#include "PhoneBook.h"
#include <iostream>

PhoneBook::PhoneBook(){counter = 0;};
PhoneBook::~PhoneBook(){};
PhoneBook::PhoneBook(const PhoneBook &other) { *this = other; }
PhoneBook &PhoneBook::operator=(const PhoneBook &other) {
	for (int i = 0; i < 8; i++)
		this->contactos[i] = other.contactos[i];
	this->counter = other.counter;
	return (*this);
};
int PhoneBook::add(Contact contacto) {
	if (counter == 8)
		counter = 0;
	contactos[counter] = contacto;
	counter++;
	return (0);
}
void PhoneBook::read() {
	int input = 8;
	std::cout << "|index     |first name|last name |nickname  |" << std::endl;
	for (int i = 0; i < 8; i++) {
		std::string aux;

		std::cout << "|" << i << "         |";
		if (contactos[i].getfirstName().size() >= 10) {
			aux = contactos[i].getfirstName().substr(0, 10);
			aux[9] = '.';
			std::cout << aux << "|";
		} else
			std::cout << contactos[i].getfirstName() + std::string(10 - contactos[i].getfirstName().size(), ' ') << "|";

		if (contactos[i].getlastName().size() >= 10) {
			aux = contactos[i].getlastName().substr(0, 10);
			aux[9] = '.';
			std::cout << aux << "|";
		} else
			std::cout << contactos[i].getlastName() + std::string(10 - contactos[i].getlastName().size(), ' ') << "|";

		if (contactos[i].getnickName().size() >= 10) {
			aux = contactos[i].getnickName().substr(0, 10);
			aux[9] = '.';
			std::cout << aux << "|";
		} else
			std::cout << contactos[i].getnickName() + std::string(10 - contactos[i].getnickName().size(), ' ') << "|";
		std::cout << std::endl;
	}
	std::cin >> input;
	if (input < 8) {
		std::cout << "First name: " << contactos[input].getfirstName() << std::endl;
		std::cout << "Last name: " << contactos[input].getlastName() << std::endl;
		std::cout << "Nickname: " << contactos[input].getnickName() << std::endl;
		std::cout << "Dark Secret: " << contactos[input].getdarkSecreat() << std::endl;
		std::cout << "Phone number: " << contactos[input].getphoneNumber() << std::endl;
	} else
		std::cout << "Out of range\n";
}
