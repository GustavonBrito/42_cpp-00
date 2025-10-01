/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook_utils.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 15:46:10 by gustavo-lin       #+#    #+#             */
/*   Updated: 2025/09/28 00:44:19 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PhoneBook.hpp"
#include "../include/Contact.hpp"

void put_space_between(int space_between)
{
	for (int i = 0; i < space_between; i++)
	{
		std::cout << " ";
	}
	std::cout << "|";
}
void put_header(bool is_single_search)
{
	if (is_single_search == false)
	{
		std::cout << "Index";
		std::cout << "     |";
		std::cout << "First Name";
		std::cout << "|";
		std::cout << "Last Name";
		std::cout << " |";
		std::cout << "Nickname";
		std::cout << "  |" << "\n";
		return ;
	}
	std::cout << "Index";
	std::cout << "     |";
	std::cout << "First Name";
	std::cout << "|";
	std::cout << "Last Name";
	std::cout << " |";
	std::cout << "Nickname";
	std::cout << "  |";
	std::cout << "Phone Num.";
	std::cout << "|";
	std::cout << "Darkest S.";
	std::cout << "|" << "\n";
}
void format_single_search(PhoneBook phone_book)
{
	Contact	contact;
	std::string temp_contact;
	int space_between;
	int	person_to_search;
	
	while (1)
	{
		std::cout << "\nInsira o indice da pessoa que deseja buscar: ";
		std::cin >> person_to_search;
		contact = phone_book.search_contact_by_index(person_to_search - 1);
		if (contact.get_darkest_secret().empty())
		{
			std::cout << "Insira um index dentro do intervalo 1 a 8" << "\n";
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			return ;
		}
		put_header(true);
		std::cout << person_to_search;
		space_between = 9;
		put_space_between(space_between);
		space_between = 10 - contact.get_first_name().size();
		if (space_between <= 0)
			std::cout << contact.get_first_name().substr(0, 9) << ".";
		else
			std::cout << contact.get_first_name();
		put_space_between(space_between);
		space_between = 10 - contact.get_last_name().size();
		if (space_between <= 0)
			std::cout << contact.get_last_name().substr(0, 9) << ".";
		else
			std::cout << contact.get_last_name();
		put_space_between(space_between);
		space_between = 10 - contact.get_nickname().size();
		if (space_between <= 0)
			std::cout << contact.get_nickname().substr(0, 9) << ".";
		else
			std::cout << contact.get_nickname();
		put_space_between(space_between);
		space_between = 10 - contact.get_phone_number().size();
		if (space_between <= 0)
			std::cout << contact.get_phone_number().substr(0, 9) << ".";
		else
			std::cout << contact.get_phone_number();
		put_space_between(space_between);
		space_between = 10 - contact.get_darkest_secret().size();
		if (space_between <= 0)
			std::cout << contact.get_darkest_secret().substr(0, 9) << ".";
		else
			std::cout << contact.get_darkest_secret();
		put_space_between(space_between);
		std::cout << "\n";
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		break ;
	}
	for (int j = 0; j < 3; j++)
	{
		std::cout << "\n";
	}
}

void format_search_all_contacts(const Contact *all_contacts)
{
	int i;
	int space_between;
	int is_first_pass;
	
	is_first_pass = 0;
	for(i = 0; i <= 7; i++)
	{
		if (!all_contacts[i].get_first_name().empty())
		{
			if (is_first_pass == 0)
			{
				std::system("clear");
				put_header(false);
				is_first_pass = 1;
			}
			std::cout << i + 1;
			space_between = 9;
			put_space_between(space_between);
			space_between = 10 - all_contacts[i].get_first_name().size();
			if (space_between <= 0)
				std::cout << all_contacts[i].get_first_name().substr(0, 9) << ".";
			else
				std::cout << all_contacts[i].get_first_name();
			put_space_between(space_between);
			space_between = 10 - all_contacts[i].get_last_name().size();
			if (space_between <= 0)
				std::cout << all_contacts[i].get_last_name().substr(0, 9) << ".";
			else
				std::cout << all_contacts[i].get_last_name();
			put_space_between(space_between);
			space_between = 10 - all_contacts[i].get_nickname().size();
			if (space_between <= 0)
				std::cout << all_contacts[i].get_nickname().substr(0, 9) << ".";
			else
				std::cout << all_contacts[i].get_nickname();
			put_space_between(space_between);
			std::cout << "\n";
		}
	}
	for (int j = 0; j < 3; j++)
	{
		std::cout << "\n";
	}
}
