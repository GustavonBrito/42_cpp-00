/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 13:18:49 by gustavo-lin       #+#    #+#             */
/*   Updated: 2025/09/26 01:48:38 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PhoneBook.hpp"
#include "../include/Contact.hpp"

void phone_book(const char *method, int contact_index)
{
	static PhoneBook phone_book_instance;
	Contact contact_instance;
	std::string	person_to_search;
	
	if (strcmp(method, "ADD") == 0)
	{
		contact_instance = get_user_informations_to_save_contact();
		phone_book_instance.save_contact(contact_instance, contact_index);
	}
	else if (strcmp(method, "SEARCH") == 0)
	{
		std::cout << "\nInsira o nome da pessoa de que deseja buscar: ";
		std::getline(std::cin, person_to_search);
		contact_instance = phone_book_instance.search_contact_by_name(person_to_search);
		std::cout << contact_instance.get_first_name() << " " <<contact_instance.get_last_name() << "\n";
	}
	else
	{
		std::cout << "Closing phone book, all contacts will be cleaned on exit.\n";
		return ;
	}
}
