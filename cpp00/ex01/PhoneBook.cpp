/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ledos-sa <ledos-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 19:42:33 by ledos-sa          #+#    #+#             */
/*   Updated: 2023/10/18 01:02:53 by ledos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
class Contact {
  private:
	std::string firstName;
	std::string lastName;
	std::string nickname;
	std::string darkSecret;
	int phoneNumber;

  public:
	Contact() = default;
	~Contact(){};
	Contact(std::string firstName, std::string lastName, std::string nickname, int phoneNumber, std::string darkSecret) {
		this->firstName = firstName;
		this->lastName = lastName;
		this->nickname = nickname;
		this->phoneNumber = phoneNumber;
		this->darkSecret = darkSecret;
	}
	std::string getfirstName() { return this->firstName; }
	std::string getlastName() { return this->lastName; }
	std::string getnickName() { return this->nickname; }
	std::string getdarkSecreat() { return this->darkSecret; }
	int getphoneNumber() { return phoneNumber; }
};

class PhoneBook {
  private:
	Contact contactos[8];
	int counter = 0;

  public:
	PhoneBook() = default;
	~PhoneBook() {}
	int add(Contact contacto) {
		if (counter == 8)
			counter = 0;
		contactos[counter] = contacto;
		counter++;
		return (0);
	}
	void read() {
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
			std::cout << "Phone number: " << contactos[input].getphoneNumber() << std::endl;
		} else
			std::cout << "Out of range\n";
	}
};

int main(int argc, char *argv[]) {

	PhoneBook x;
	std::string firstName;
	std::string lastName;
	std::string nickname;
	std::string darkSecret;
	int phoneNumber;
	std::string action;
	while (1) {
		std::cout << "Action: ";
		std::cin >> action;
		if (!action.compare("ADD")) {
			std::cout << "First Name: ";
			std::cin >> firstName;
			std::cout << "Last Name: ";
			std::cin >> lastName;
			std::cout << "Nickname Name: ";
			std::cin >> nickname;
			std::cout << "Dark Secret: ";
			std::cin >> darkSecret;
			std::cout << "Phone Number: ";
			std::cin >> phoneNumber;
			x.add(Contact(firstName, lastName, nickname, phoneNumber, darkSecret));
		} else if (!action.compare("SEARCH")) {
			x.read();
		} else if (!action.compare("EXIT")) {
			break;
		} else
			std::cout << "INVALID ACTION\n";
	}
}
