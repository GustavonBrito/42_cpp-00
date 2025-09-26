/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 13:41:24 by gustavo-lin       #+#    #+#             */
/*   Updated: 2025/09/26 01:45:07 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MEGAPHONE
# define MEGAPHONE

#include <iostream>
#include "../include/Contact.hpp"

void phone_book(const char *method, int contact_index);

class		PhoneBook {

public:

	PhoneBook(void) {} //Construtor
	~PhoneBook(void) {} //Destrutor
	
	void	save_contact(Contact contact, int contact_index)
	{
		if (is_contact_saved(contact) == 1)
		{
			std::cout << "Contato ja registrado na agenda telefonica !\n";
			return ;
		}
		if (contact_index <= 7)
			_contacts[contact_index] = contact;
		else
			_contacts[7] = contact;
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

	Contact  _contacts[8];
};

#endif