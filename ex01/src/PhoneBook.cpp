/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 13:18:49 by gustavo-lin       #+#    #+#             */
/*   Updated: 2025/10/08 12:13:47 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PhoneBook.hpp"
#include "../include/Contact.hpp"

const Contact	*PhoneBook::get_all_contacts(void) const
{
	return _contacts;
}

bool	PhoneBook::save_contact(const Contact &contact, int contact_index)
{
	if (_is_contact_saved(contact) == 1)
	{
		std::cout << "Contato ja registrado na agenda telefonica !\n";
		return false;
	}
	if (contact_index <= 7)
		_contacts[contact_index] = contact;
	else
		_contacts[7] = contact;
	return true;
}

Contact	PhoneBook::search_contact_by_index(int index) const
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

int		PhoneBook::_is_contact_saved(const Contact &contact) const
{
	for (int i = 0; i < 8; i++)
	{
		if (contact.get_first_name() == _contacts[i].get_first_name())
			return (1);
	}
	return (0);
}

void show_contacts(PhoneBook phone_book)
{
	const Contact *all_contacts;
	all_contacts = phone_book.get_all_contacts();
	format_search_all_contacts(all_contacts);
	format_single_search(phone_book);
}

bool phone_book(const char *method, int contact_index)
{
	static PhoneBook phone_book_instance;
	Contact contact_instance;
	
	if (strcmp(method, "ADD") == 0)
	{
		contact_instance = get_user_informations_to_save_contact();
		if (contact_instance.get_first_name().empty())
			return false;
		return (phone_book_instance.save_contact(contact_instance, contact_index));
	}
	else if (strcmp(method, "SEARCH") == 0)
		show_contacts(phone_book_instance);
	else
		std::cout << "Closing phone book, all contacts will be cleaned on exit.\n";
	return true;
}
