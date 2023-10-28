/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ledos-sa <ledos-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 13:59:26 by ledos-sa          #+#    #+#             */
/*   Updated: 2023/10/28 16:18:05 by ledos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <string>
class Contact {
  private:
	std::string firstName;
	std::string lastName;
	std::string nickname;
	std::string darkSecret;
	std::string phoneNumber;

  public:
	Contact();;
	~Contact();
	Contact(const Contact&);
	Contact& operator=(const Contact&);
	Contact(std::string firstName, std::string lastName, std::string nickname, std::string phoneNumber, std::string darkSecret);
	std::string getfirstName(); 
	std::string getlastName();
	std::string getnickName();
	std::string getdarkSecreat();
	std::string getphoneNumber();

};
