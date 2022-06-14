/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfarfetc <nfarfetc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 09:59:24 by nfarfetc          #+#    #+#             */
/*   Updated: 2022/05/21 14:29:06 by nfarfetc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook 
{
private:
	int			oldest;

public:
	Contact		*book[8];
	int			len;

	PhoneBook();
	~PhoneBook();
	void	addContact(Contact *newOne);
	void	findContact(int contactId);
};

#endif