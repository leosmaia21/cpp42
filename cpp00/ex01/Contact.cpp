/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ledos-sa <ledos-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 14:19:23 by ledos-sa          #+#    #+#             */
/*   Updated: 2023/10/28 16:18:23 by ledos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.h"

Contact::Contact(){};
Contact::~Contact(){};
Contact::Contact(const Contact & other) {*this = other;};
Contact& Contact::operator=(const Contact &other) {
	this->firstName = other.firstName;
	this->lastName = other.lastName;
	this->nickname = other.nickname;
	this->darkSecret = other.darkSecret;
	this->phoneNumber = other.phoneNumber;
	return (*this);
};
Contact::Contact(std::string firstName, std::string lastName, std::string nickname, std::string phoneNumber, std::string darkSecret) {
	this->firstName = firstName;
	this->lastName = lastName;
	this->nickname = nickname;
	this->phoneNumber = phoneNumber;
	this->darkSecret = darkSecret;
}
std::string Contact::getfirstName() { return this->firstName; }
std::string Contact::getlastName() { return this->lastName; }
std::string Contact::getnickName() { return this->nickname; }
std::string Contact::getdarkSecreat() { return this->darkSecret; }
std::string Contact::getphoneNumber() { return this->phoneNumber; }
