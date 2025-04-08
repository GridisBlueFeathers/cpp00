/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svereten <svereten@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 13:20:08 by svereten          #+#    #+#             */
/*   Updated: 2025/04/08 12:14:17 by svereten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "PhoneBook.hpp"
#include <iostream>

int	main()
{
	std::string	input;
	PhoneBook	book;

	while (true) {
		std::cout << "ADD, SEARCH or EXIT: ";
		std::cin >> input;
		std::cin.ignore(1, '\n');
		if (input == "ADD")
			book.add_contact();
		if (input == "SEARCH")
			book.list_contacts();
		if (input == "EXIT" || input == "")
			break ;
		input = "";
	}
	return (0);
}
