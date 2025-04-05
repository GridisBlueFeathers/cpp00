/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svereten <svereten@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 15:15:31 by svereten          #+#    #+#             */
/*   Updated: 2025/04/05 12:05:10 by svereten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Contact.hpp"
#include <iostream>
#include <iomanip>

Contact::Contact(
	std::string first_name,
	std::string last_name,
	std::string nickname,
	std::string phone_number,
	std::string secret
):	_first_name(first_name),
	_last_name(last_name),
	_nickname(nickname),
	_phone_number(phone_number),
	_secret(secret) {}

Contact::Contact() :
	_first_name("John"),
	_last_name("Doe"),
	_nickname("Jonny"),
	_phone_number("+10000000000"),
	_secret("Nobody knows who he is") {}

void Contact::display_full(void) {
	std::cout << Contact::_first_name << std::endl;
	std::cout << Contact::_last_name << std::endl;
	std::cout << Contact::_nickname << std::endl;
	std::cout << Contact::_phone_number << std::endl;
	std::cout << Contact::_secret << std::endl;
}

static void	print_column(std::string str)
{
	std::cout.flags(std::ios::right);
	if (str.length() > 10)
		std::cout << std::setw(10) << str.substr(0, 9) << ".";
	else
		std::cout << std::setw(10) << str;
	std::cout << "|";

}

static void print_column(int i)
{
	std::cout.flags(std::ios::right);
	std::cout << std::setw(10) << i;
	std::cout << "|";
}

void	Contact::display_less(int i) {
	print_column(i);
	print_column(Contact::_first_name);
	print_column(Contact::_last_name);
	print_column(Contact::_nickname);
	std::cout << std::endl;

}
