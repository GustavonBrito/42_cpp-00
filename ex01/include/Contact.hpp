/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 23:28:11 by gustavo           #+#    #+#             */
/*   Updated: 2025/10/01 23:47:24 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string.h>

class Contact {

public:

	std::string	get_first_name(void) const
	{
		return _first_name; 
	}
	std::string	get_last_name(void) const
	{
		return _last_name; 
	}
	std::string	get_nickname(void) const
	{
		return _nickname; 
	}
	std::string	get_phone_number(void) const
	{
		return _phone_number; 
	}
	std::string	get_darkest_secret(void) const
	{
		return _darkest_secret; 
	}
	void	set_first_name(std::string first_name)
	{
		_first_name = first_name;
	}
	void	set_last_name(std::string last_name)
	{
		_last_name = last_name;
	}
	void	set_nickname(std::string nickname)
	{
		_nickname = nickname;
	}
	void	set_phone_number(std::string phone_number)
	{
		_phone_number = phone_number;
	}
	void	set_darkest_secret(std::string darkest_secret)
	{
		_darkest_secret = darkest_secret;
	}


private:

	std::string		_first_name;
	std::string		_last_name;
	std::string		_nickname;
	std::string		_phone_number;
	std::string		_darkest_secret;

};

Contact get_user_informations_to_save_contact (void);

#endif