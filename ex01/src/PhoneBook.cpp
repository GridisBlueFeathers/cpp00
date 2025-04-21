/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svereten <svereten@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 14:17:12 by svereten          #+#    #+#             */
/*   Updated: 2025/04/21 18:37:26 by svereten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "PhoneBook.hpp"
#include <cstdio>
#include <iostream>
#include <ios>
#include <iomanip>

PhoneBook::PhoneBook(void) :
	_book(),
	_contacts_amount(0),
	_oldest_idx(0) {}

static bool	get_field(std::string &field, std::string label) {
	std::string input;

	std::cout << label;
	if (!std::getline(std::cin, input))
		return (false);
	field = input;
	return (true);
}

void	PhoneBook::add_contact(void) {
	Contact		new_contact;
	std::string	input;

	if (!get_field(input, "First name: ")
		|| !new_contact.set_first_name(input))
		return ;
	if (!get_field(input, "Last name: ")
		|| !new_contact.set_last_name(input))
		return ;
	if (!get_field(input, "Nickname: ")
		|| !new_contact.set_nickname(input))
		return ;
	if (!get_field(input, "Phone number: ")
		|| !new_contact.set_phone_number(input))
		return ;
	if (!get_field(input, "Darkest secret: ")
		|| !new_contact.set_secret(input))
		return ;
	if (_contacts_amount == 8) {
		_book[_oldest_idx] = new_contact;
		_oldest_idx++;
		if (_oldest_idx == 8)
			_oldest_idx = 0;
		return ;
	}
	_book[_contacts_amount] = new_contact;
	_contacts_amount++;
	return ;
}

void	PhoneBook::list_contacts() {
	int			i;
	std::string	intput;

	if (!_contacts_amount) {
		std::cout << "Book has no contacts" << std::endl;
		return ;
	}
	std::cout.flags(std::ios::right);
	std::cout << std::setw(10) << "Index" << "|";
	std::cout << std::setw(10) << "First name" << "|";
	std::cout << std::setw(10) << "Last name" << "|";
	std::cout << std::setw(10) << "Nickname" << "|";
	std::cout << std::endl;
	i = 0;
	while (i < _contacts_amount) {
		_book[i].display_less(i);
		i++;
	}
	std::cout << "Input index of a contact to display: ";
	if (!std::getline(std::cin, intput))
		return ;
	if (intput.length() != 1) {
		std::cerr << "Wrong input" << std::endl;
		return ;
	}
	i = intput[0] - '0';
	if (i < 0 || i >= _contacts_amount) {
		std::cerr << "Wrong index" << std::endl;
		return ;
	}
	_book[i].display_full();
	return ;
}
