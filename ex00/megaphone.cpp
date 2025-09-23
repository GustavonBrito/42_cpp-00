/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo <gustavo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 22:22:04 by gustavo           #+#    #+#             */
/*   Updated: 2025/09/21 23:46:16 by gustavo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mepgaphone.hpp"

void pass_to_upper(char** input_char)
{
	int i = 1;
	char upper_char;
	
	while(input_char[i])
	{
		int j = 0;
		while (input_char[i][j])
		{
			upper_char = std::toupper(input_char[i][j]);
			std::cout << upper_char;
			j++;
		}
		if (input_char[i + 1] != NULL)
			std::cout << " ";
		i++;
	}
	std::cout << "\n";
	return ;
}

int main (int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		return (0);
	}
	pass_to_upper(argv);
	return (0);
}