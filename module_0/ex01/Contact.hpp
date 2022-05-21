/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfarfetc <nfarfetc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 10:01:24 by nfarfetc          #+#    #+#             */
/*   Updated: 2022/05/21 14:26:39 by nfarfetc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>

class Contact
{
private:
	int			id;
	std::string	firstName;
	std::string	lastName;
	std::string	nickName;
	std::string phoneNumber;
	std::string secret;

	Contact();

public:
	Contact(std::string firstName, std::string lastName, std::string nickName, std::string phoneNumber, std::string secret);
	~Contact();
	int		getId( void );
	void	setId( int id );
	
	std::string	getFirstName( void );
	void		setFirstName( std::string firstName );
	
	std::string	getLastName( void );
	void		setLastName( std::string lastName );
	
	std::string	getNickName( void );
	void		setNickName( std::string nickName );
	
	std::string	getPhoneNumber( void );
	void		setPhoneNumber( std::string phoneNumber );
	
	std::string	getSecret( void );
	void		setSecret( std::string secret );
};


#endif