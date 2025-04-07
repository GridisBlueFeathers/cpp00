/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svereten <svereten@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 14:17:12 by svereten          #+#    #+#             */
/*   Updated: 2025/04/07 14:32:07 by svereten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "PhoneBook.hpp"
#include <iostream>

PhoneBook::PhoneBook(void) :
	_book(),
	_contacts_amount(0),
	_oldest_idx(0) {}

static bool	get_field(std::string *field, std::string label) {
	std::string input;

	std::cout << label;
	std::cin >> input;
	if (!input.length()) {
		std::cerr << "Contacts can't have empty fields" << std::endl;
		return (false);
	}
	*field = input;
	return (true);
}

void	PhoneBook::add_contact(void) {
	Contact		new_contact;
	std::string	input;

	if (!get_field(&input, "First name: "))
		return ;
	new_contact.set_first_name(input);
	if (!get_field(&input, "Last name: "))
		return ;
	new_contact.set_last_name(input);
	if (!get_field(&input, "Nickname: "))
		return ;
	new_contact.set_nickname(input);
	if (!get_field(&input, "Phone number: "))
		return ;
	new_contact.set_phone_number(input);
	if (!get_field(&input, "Darkest secret: "))
		return ;
	new_contact.set_secret(input);
	if (_contacts_amount == 8)
	{
		_book[_oldest_idx] = new_contact;
		_oldest_idx++;
		if (_oldest_idx == 8)
			_oldest_idx = 0;
		return ;
	}
	_book[_contacts_amount] = new_contact;
	_contacts_amount++;
}

void	PhoneBook::list_contacts() {
	int	i;

	if (!_contacts_amount) {
		std::cout << "Book has no contacts" << std::endl;
		return ;
	}
	i = 0;
	while (i < _contacts_amount)
	{
		_book[i].display_less(i);
		i++;
	}
	std::cout << "Input index of a contact to display: ";
	std::cin >> i;
	std::cin.ignore();
	std::cout << i << std::endl;
	if (i < 0 || i > _contacts_amount - 1) {
		std::cerr << "Wrong index";
		return ;
	}
	_book[i].display_full();
}
