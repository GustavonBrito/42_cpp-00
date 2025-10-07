/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 13:41:24 by gustavo-lin       #+#    #+#             */
/*   Updated: 2025/10/01 23:36:01 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <ios>
#include <limits>
#include <cstdlib>
#include "Contact.hpp"

class		PhoneBook {

public:

	const Contact	*get_all_contacts(void) const;
	bool			save_contact(const Contact &contact, int contact_index);
	Contact			search_contact_by_index(int index) const;

private:

	int		_is_contact_saved(const Contact &contact) const;
	Contact  _contacts[8];
};

bool phone_book(const char *method, int contact_index);
void put_header(bool is_single_search);
void put_space_between(int space_between);
void format_single_search(PhoneBook phone_book);
void format_search_all_contacts(const Contact *all_contacts);

#endif