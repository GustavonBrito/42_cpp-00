/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 13:41:24 by gustavo-lin       #+#    #+#             */
/*   Updated: 2025/09/25 00:40:56 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MEGAPHONE
# define MEGAPHONE

#include <iostream>
#include "include/Contact.hpp"

class		PhoneBook {

public:

	typedef PhoneBook		t;

	PhoneBook(void); //Construtor
	~PhoneBook(void); //Destrutor
	
private:

	Contact		contacts[8];
};

#endif