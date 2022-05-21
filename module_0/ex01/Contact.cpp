/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfarfetc <nfarfetc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 10:06:41 by nfarfetc          #+#    #+#             */
/*   Updated: 2022/05/21 14:04:25 by nfarfetc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {}

Contact::Contact(std::string firstName, std::string lastName, std::string nickName, std::string phoneNumber, std::string secret) {
	this->firstName = firstName;
	this->lastName = lastName;
	this->nickName = nickName;
	this->phoneNumber = phoneNumber;
	this->secret = secret;
}

Contact::~Contact() {}

int	Contact::getId( void ) {
	return this->id;
}

void	Contact::setId( int id ) {
	this->id = id;
}

std::string	Contact::getFirstName( void ) {
	return this->firstName;
}

void	Contact::setFirstName( std::string firstName ) {
	this->firstName = firstName;
}

std::string	Contact::getLastName( void ) {
	return this->lastName;
}

void	Contact::setLastName( std::string lastName ) {
	this->lastName = lastName;
}

std::string	Contact::getNickName( void ) {
	return this->nickName;
}

void	Contact::setNickName( std::string nickName ) {
	this->nickName = nickName;
}

std::string	Contact::getPhoneNumber( void ) {
	return this->phoneNumber;
}

void	Contact::setPhoneNumber( std::string phoneNumber ) {
	this->phoneNumber = phoneNumber;
}

std::string	Contact::getSecret( void ) {
	return this->secret;
}

void	Contact::setSecret( std::string secret ) {
	this->secret = secret;
}