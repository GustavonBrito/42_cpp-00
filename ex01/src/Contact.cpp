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

Contact get_user_informations_to_save_contact (void)
{
	std::string temp_reponse;
	Contact contact;
	
	std::cout << "Insira o nome do contato: ";
	std::getline(std::cin, temp_reponse);
	contact.set_first_name(temp_reponse);
	std::cout << "\nInsira o sobrenome do contato: ";
	std::getline(std::cin, temp_reponse);
	contact.set_last_name(temp_reponse);
	std::cout << "\nInsira o apelido do contato: ";
	std::getline(std::cin, temp_reponse);
	contact.set_nickname(temp_reponse);
	std::cout << "\nInsira o numero de contato: ";
	std::getline(std::cin, temp_reponse);
	contact.set_phone_number(temp_reponse);
	std::cout << "\nInsira um segredo sobre esse contato: ";
	std::getline(std::cin, temp_reponse);
	contact.set_darkest_secret(temp_reponse);

	return (contact);
}