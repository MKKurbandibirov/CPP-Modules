/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfarfetc <nfarfetc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 10:58:27 by nfarfetc          #+#    #+#             */
/*   Updated: 2022/05/21 16:23:09 by nfarfetc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iomanip>

int main()
{
	std::string command;
	PhoneBook *book = new PhoneBook();
	while (1) {
		std::cout << "It is your phonebook. Enter the one of following command(ADD, SEARCH or EXIT): ";
		std::cin >> command;
		if (command == "ADD") {
			std::cout << "Contact's first name: ";
			std::string firstName;
			std::cin >> firstName;
			std::cout << "Contact's last name: ";
			std::string lastName;
			std::cin >> lastName;
			std::cout << "Contact's nickname: ";
			std::string nickname;
			std::cin >> nickname;
			std::cout << "Contact's phone number: ";
			std::string phoneNumber;
			std::cin >> phoneNumber;
			std::cout << "Contact's darkest secret: ";
			std::string secret;
			std::cin >> secret;
			if (firstName != "" && lastName != "" && nickname != "" && phoneNumber != "" && secret != "") {
				Contact *contact = new Contact(firstName, lastName, nickname, phoneNumber, secret);
				book->addContact(contact);
			}
		} else if (command == "SEARCH") {
			std::cout << "|" << std::setw(10) << "Index" << "|" <<  std::setw(10) << "First Name" << "|" << std::setw(10)
				<< "Last Name" << "|" << std::setw(10) << "Nickname" << "|" << std::endl;
			std::cout << "|" << std::setw(11) << std::setfill('-') << "|" << std::setw(11) << std::setfill('-') << "|" <<
				std::setw(11) << std::setfill('-') << "|" << std::setw(11) << std::setfill('-') << "|" << std::setfill(' ') << std::endl;
			for (int i = 0; i < book->len; i++) {
				std::cout << "|" << std::setw(10) << book->book[i]->getId() << "|";
				std::string tmp = book->book[i]->getFirstName();
				if (tmp.length() > 10) {
					std::cout << std::setw(9) << tmp.erase(9, tmp.length() - 9) << ".|" ;
				} else {
					std::cout << std::setw(10) << tmp << "|";
				}
				tmp = book->book[i]->getLastName();
				if (tmp.length() > 10) {
					std::cout << std::setw(9) << tmp.erase(9, tmp.length() - 9) << ".|" ;
				} else {
					std::cout << std::setw(10) << tmp << "|";
				}
				tmp = book->book[i]->getNickName();
				if (tmp.length() > 10) {
					std::cout << std::setw(9) << tmp.erase(9, tmp.length() - 9) << ".|" ;
				} else {
					std::cout << std::setw(10) << tmp << "|";
				}
				std::cout << std::endl;
			}
			std::cout << "Enter the contact id, you need: ";
			int id;
			std::cin >> id;
			book->findContact(id);
		} else if (command == "EXIT") {
			break;
		}
	}
	return 0;
}