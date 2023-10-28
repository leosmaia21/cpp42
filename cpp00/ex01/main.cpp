/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ledos-sa <ledos-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 19:42:33 by ledos-sa          #+#    #+#             */
/*   Updated: 2023/10/28 16:18:26 by ledos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "PhoneBook.h"
#include <iostream>

int main() {

	PhoneBook x;
	std::string firstName;
	std::string lastName;
	std::string nickname;
	std::string darkSecret;
	std::string phoneNumber;
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
