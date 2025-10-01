/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 13:41:24 by gustavo-lin       #+#    #+#             */
/*   Updated: 2025/09/28 00:33:05 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MEGAPHONE
# define MEGAPHONE

#include <iostream>
#include <ios>
#include <limits>
#include <cstdlib>
#include "../include/Contact.hpp"

class		PhoneBook {

public:

	PhoneBook(void) {} //Construtor
	~PhoneBook(void) {} //Destrutor
	
	const Contact	*get_all_contacts(void)
	{
		return _contacts;
	}
	
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
	
	Contact	search_contact_by_index(int index)
	{		
		Contact blank_contact;

		blank_contact.set_first_name("");
		for (int i = 0; i < 8; i++)
		{
			if (index == i && !_contacts[i].get_first_name().empty())
				return _contacts[i];
		}
		return blank_contact;
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

void phone_book(const char *method, int contact_index);
void put_header(bool is_single_search);
void put_space_between(int space_between);
void format_single_search(PhoneBook phone_book);
void format_search_all_contacts(const Contact *all_contacts);

#endif