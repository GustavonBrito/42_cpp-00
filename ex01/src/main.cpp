/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 10:01:47 by gustavo-lin       #+#    #+#             */
/*   Updated: 2025/09/26 16:04:52 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PhoneBook.hpp"

int main(void)
{
	int i = 0;
	while (1)
	{
		std::string option;
		std::cout << "Selecione um dos métodos da agenda telefonica\n";
		std::cout << "Aperte 1 para adicionar um contato.\n";
		std::cout << "Aperte 2 para mostrar os contatos adicionados na agenda.\n";
		std::cout << "Aperte 3 para sair.\n";
		std::getline(std::cin, option);
		if (option[0] == '1')
		{
			if (phone_book("ADD", i) == true)
				i++;
		}
		else if (option[0] == '2')
			phone_book("SEARCH", i);
		else if (option[0] == '3')
		{
			phone_book("EXIT", i);
			return (0);
		}
		else
			std::cout << "Selecione opções validas !\n";
	}
	return (0);
}
