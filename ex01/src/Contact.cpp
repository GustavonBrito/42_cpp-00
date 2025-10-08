/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 10:01:09 by gustavo-lin       #+#    #+#             */
/*   Updated: 2025/10/08 10:25:26 by gustavo-lin      ###   ########.fr       */
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

bool	validate_user_input(std::vector<std::string> temp_response, int index)
{
	if (temp_response[index].empty())
	{
		std::cout << "Inputs nao podem ser vazios.\n";
		return false;
	}
	if (index == 3)
	{
		for(size_t j = 0; j < temp_response[3].size(); j++)
		{
			if (isdigit(temp_response[3][j]) == 0)
			{
				std::cout << "Apenas digito é aceito no campo telefonico.\n";
				return false;
			}
		}
	}
	return true;
}

Contact get_user_informations_to_save_contact (void)
{
	std::vector<std::string> temp_response(5);
	Contact contact;
	
	std::cout << "Insira o nome do contato: ";
	std::getline(std::cin, temp_response[0]);
	if (!validate_user_input(temp_response, 0))
		return (contact);
	std::cout << "\nInsira o sobrenome do contato: ";
	std::getline(std::cin, temp_response[1]);
	if (!validate_user_input(temp_response, 1))
		return (contact);
	std::cout << "\nInsira o apelido do contato: ";
	std::getline(std::cin, temp_response[2]);
	if (!validate_user_input(temp_response, 2))
		return (contact);
	std::cout << "\nInsira o numero de contato: ";
	std::getline(std::cin, temp_response[3]);
	if (!validate_user_input(temp_response, 3))
		return (contact);
	std::cout << "\nInsira um segredo sobre esse contato: ";
	std::getline(std::cin, temp_response[4]);
	if (!validate_user_input(temp_response, 4))
		return (contact);
	contact.set_first_name(temp_response[0]);
	contact.set_last_name(temp_response[1]);
	contact.set_nickname(temp_response[2]);
	contact.set_phone_number(temp_response[3]);
	contact.set_darkest_secret(temp_response[4]);
	return (contact);
}
