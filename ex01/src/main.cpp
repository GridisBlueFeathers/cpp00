/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svereten <svereten@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 13:20:08 by svereten          #+#    #+#             */
/*   Updated: 2025/04/05 12:03:44 by svereten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iostream>

int	main()
{
	PhoneBook	book;
	Contact contact("0123456788", "hey", "3", "4", "5");
	contact.display_less(1);

	/*std::cout << "hello" << std::endl;
	book.add_contact(&contact);
	book.list_contacts();*/
	return (0);
}
