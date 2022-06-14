/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfarfetc <nfarfetc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 10:39:45 by nfarfetc          #+#    #+#             */
/*   Updated: 2022/05/21 14:23:13 by nfarfetc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {
	this->len = 0;
	this->oldest = 0;
}

PhoneBook::~PhoneBook() {
	std::cout << "Your contacts have been lost!" << std::endl;
}

void	PhoneBook::addContact(Contact *newOne) {
	if (len != 8) {
		this->book[this->len] = newOne;
		newOne->setId(len);
		len++;
	} else {
		if (this->oldest == 8)
			this->oldest = 0;
		this->book[this->oldest] = newOne;
		newOne->setId(oldest);
		oldest++;
	}
}

void	PhoneBook::findContact(int contactId) {
	int i;
	for (i = 0; i < this->len; i++) {
		if (contactId == this->book[i]->getId()) {
			std::cout << this->book[i]->getId() << std::endl << this->book[i]->getFirstName() << 
				std::endl << this->book[i]->getLastName() << std::endl << this->book[i]->getNickName() << std::endl
				<< this->book[i]->getPhoneNumber() << std::endl << this->book[i]->getSecret() << std::endl;
			break;
		}
	}
	if (i >= this->len)	{
		std::cout << "[ERROR]: Index is out if range!" << std::endl;
	}
}