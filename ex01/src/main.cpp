/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svereten <svereten@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 13:20:08 by svereten          #+#    #+#             */
/*   Updated: 2025/04/09 09:16:41 by svereten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "PhoneBook.hpp"
#include <iostream>
#include <limits>

int	main()
{
	std::string	input;
	PhoneBook	book;

	while (true) {
		std::cout << "ADD, SEARCH or EXIT: ";
		std::cin >> input;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		if (input == "ADD" && !book.add_contact())
			break ;
		if (input == "SEARCH" && !book.list_contacts())
			break ;
		if (input == "EXIT" || input == "")
			break ;
		input = "";
	}
	return (0);
}
