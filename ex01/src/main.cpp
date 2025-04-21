/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svereten <svereten@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 13:20:08 by svereten          #+#    #+#             */
/*   Updated: 2025/04/21 19:09:01 by svereten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "PhoneBook.hpp"
#include <iostream>

int	main()
{
	std::string	input;
	PhoneBook	book;

	while (std::cin) {
		std::cout << "ADD, SEARCH or EXIT: ";
		if (!std::getline(std::cin, input))
			return (0);
		if (input == "ADD")
			book.add_contact();
		if (input == "SEARCH")
			book.list_contacts();
		if (input == "EXIT")
			break ;
	}
	return (0);
}
