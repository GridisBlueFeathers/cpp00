/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svereten <svereten@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 15:15:31 by svereten          #+#    #+#             */
/*   Updated: 2025/04/21 19:21:40 by svereten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Contact.hpp"
#include <cctype>
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


void	Contact::operator=(Contact contact) {
	_first_name = contact._first_name;
	_last_name = contact._last_name;
	_nickname = contact._nickname;
	_phone_number = contact._phone_number;
	_secret = contact._secret;
}

bool	Contact::set_first_name(std::string &str) {
	if (!str.length()) {
		std::cerr << "Contacts can't have empty fields" << std::endl;
		return (false);
	}
	if (str.length() > 100) {
		std::cerr << "That's way too long of a first name" << std::endl;
		return (false);
	}
	_first_name = str;
	return (true);
}

bool	Contact::set_last_name(std::string &str) {
	if (!str.length()) {
		std::cerr << "Contacts can't have empty fields" << std::endl;
		return (false);
	}
	if (str.length() > 100) {
		std::cerr << "That's way too long of a last name" << std::endl;
		return (false);
	}
	_last_name = str;
	return (true);
}

bool	Contact::set_nickname(std::string &str) {
	if (!str.length()) {
		std::cerr << "Contacts can't have empty fields" << std::endl;
		return (false);
	}
	if (str.length() > 100) {
		std::cerr << "That's way too long of a nickname" << std::endl;
		return (false);
	}
	_nickname = str;
	return (true);
}

bool	Contact::set_phone_number(std::string &str) {
	unsigned long i = 0;
	if (!str.length()) {
		std::cerr << "Contacts can't have empty fields" << std::endl;
		return (false);
	}
	if (str.length() > 15) {
		std::cerr << "That's way too long of a phone number" << std::endl;
		return (false);
	}
	while (i < str.length()) {
		if (!std::isdigit(str[i])) {
			std::cerr << "Phone number should contain only digits" << std::endl;
			return (false);
		}
		i++;
	}
	_phone_number = str;
	return (true);
}

bool	Contact::set_secret(std::string &str) {
	if (!str.length()) {
		std::cerr << "Contacts can't have empty fields" << std::endl;
		return (false);
	}
	if (str.length() > 100) {
		std::cerr << "That's way too long of a darkest secret" << std::endl;
		return (false);
	}
	_secret = str;
	return (true);
}

void Contact::display_full(void) const {
	std::cout << "First name: " << Contact::_first_name << std::endl;
	std::cout << "Last name: " << Contact::_last_name << std::endl;
	std::cout << "Nickname: " << Contact::_nickname << std::endl;
	std::cout << "Phone number: " << Contact::_phone_number << std::endl;
	std::cout << "Darkest secret: " << Contact::_secret << std::endl;
}

static void	print_column(std::string str) {
	std::cout.flags(std::ios::right);
	if (str.length() > 10)
		std::cout << str.substr(0, 9) << ".";
	else
		std::cout << std::setw(10) << str;
	std::cout << "|";
}

static void print_column(int i) {
	std::cout.flags(std::ios::right);
	std::cout << std::setw(10) << i;
	std::cout << "|";
}

void	Contact::display_less(int i) const {
	print_column(i);
	print_column(Contact::_first_name);
	print_column(Contact::_last_name);
	print_column(Contact::_nickname);
	std::cout << std::endl;
}
