/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 10:01:09 by gustavo-lin       #+#    #+#             */
/*   Updated: 2025/10/01 23:45:57 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Contact.hpp"
#include "../include/PhoneBook.hpp"

std::string	Contact::get_first_name(void) const
{
	return _first_name; 
}

std::string	Contact::get_last_name(void) const
{
	return _last_name; 
}

std::string	Contact::get_nickname(void) const
{
	return _nickname; 
}

std::string	Contact::get_phone_number(void) const
{
	return _phone_number; 
}

std::string	Contact::get_darkest_secret(void) const
{
	return _darkest_secret; 
}

void	Contact::set_first_name(std::string first_name)
{
	_first_name = first_name;
}

void	Contact::set_last_name(std::string last_name)
{
	_last_name = last_name;
}

void	Contact::set_nickname(std::string nickname)
{
	_nickname = nickname;
}

void	Contact::set_phone_number(std::string phone_number)
{
	_phone_number = phone_number;
}

void	Contact::set_darkest_secret(std::string darkest_secret)
{
	_darkest_secret = darkest_secret;
}

bool	validate_user_input(std::string input, std::string field)
{
	if (field == "name" || field == "second_name")
	{

	}
}

Contact get_user_informations_to_save_contact (void)
{
	std::vector<std::string> temp_response;
	Contact contact;
	
	std::cout << "Insira o nome do contato: ";
	std::getline(std::cin, temp_response[0]);
	if (validate_user_input(temp_response[0], "name") == false)
		return ;
	std::cout << "\nInsira o sobrenome do contato: ";
	std::getline(std::cin, temp_response[1]);
	//validate_user_input(temp_response[1], "second_name");
	std::cout << "\nInsira o apelido do contato: ";
	std::getline(std::cin, temp_response[2]);
	std::cout << "\nInsira o numero de contato: ";
	std::getline(std::cin, temp_response[3]);
	std::cout << "\nInsira um segredo sobre esse contato: ";
	std::getline(std::cin, temp_response[4]);
	// contact.set_darkest_secret(temp_response);
	// contact.set_nickname(temp_response);
	// contact.set_phone_number(temp_response);

	return (contact);
}
