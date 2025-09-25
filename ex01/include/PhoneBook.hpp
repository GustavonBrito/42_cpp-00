/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 13:41:24 by gustavo-lin       #+#    #+#             */
/*   Updated: 2025/09/25 12:25:11 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MEGAPHONE
# define MEGAPHONE

#include <iostream>
#include "../include/Contact.hpp"

void phone_book(const char *method, int contact_index);

class		PhoneBook {

public:

	typedef PhoneBook		t;

	PhoneBook(void) {} //Construtor
	~PhoneBook(void) {} //Destrutor
	
	void	save_contact(Contact contact, int contact_index)
	{
		if (is_contact_saved(contact) == 1)
		{
			std::cout << "Contato ja registrado na agenda telefonica !\n";
			return ;
		}
		_contacts[contact_index] = contact;
	}
	
	Contact	search_contact_by_name(std::string name)
	{		
		for (int i = 0; i < 8; i++)
		{
			if (name == _contacts[i].get_first_name())
				return _contacts[i];
		}
		return _contacts[0];
	}
	
	void	exit()
	{
		//has to be done yet
	}

private:

	int		is_contact_saved(Contact contact)
	{
		for (int i = 0; i < 8; i++)
		{
			if (contact.get_first_name() == _contacts[i].get_first_name())
				return (1);
		}
		return (0);
	}

	Contact		_contacts[8];
};

#endif