/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 13:18:49 by gustavo-lin       #+#    #+#             */
/*   Updated: 2025/09/26 15:57:33 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PhoneBook.hpp"
#include "../include/Contact.hpp"

void show_contacts(PhoneBook phone_book)
{
	const Contact *all_contacts;
	all_contacts = phone_book.get_all_contacts();
	format_search_all_contacts(all_contacts);
	format_single_search(phone_book);
}

void phone_book(const char *method, int contact_index)
{
	static PhoneBook phone_book_instance;
	Contact contact_instance;
	
	if (strcmp(method, "ADD") == 0)
	{
		contact_instance = get_user_informations_to_save_contact();
		phone_book_instance.save_contact(contact_instance, contact_index);
	}
	else if (strcmp(method, "SEARCH") == 0)
	{
		show_contacts(phone_book_instance);
	}
	else
	{
		std::cout << "Closing phone book, all contacts will be cleaned on exit.\n";
		return ;
	}
}
