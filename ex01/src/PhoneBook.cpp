/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svereten <svereten@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 14:17:12 by svereten          #+#    #+#             */
/*   Updated: 2025/04/03 15:21:37 by svereten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>

PhoneBook::PhoneBook(void) {
	_contacts_amount = 0;
}

void	PhoneBook::add_contact(Contact *contact) {
	if (_contacts_amount == 8)
	{
		return ;
	}
	_book[_contacts_amount] = contact;
	_contacts_amount++;
}

void	PhoneBook::list_contacts() {
	int	i;

	std::cout << _contacts_amount << std::endl;
	std::cout << std::setfill(' ') << std::setw(10);
	i = 0;
	while (i < _contacts_amount)
	{
		std::cout << std::setw(10) << i <<
			std::setw(10) << _book[i]->get_first_name() <<
			std::setw(10) << _book[i]->get_last_name() <<
			std::setw(10) << _book[i]->get_nickname() <<
			std::endl;
		i++;
	}
}
