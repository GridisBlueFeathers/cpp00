/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svereten <svereten@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 15:41:59 by svereten          #+#    #+#             */
/*   Updated: 2025/04/03 14:51:24 by svereten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook {
	private:
		Contact *_book[8];
		int		_contacts_amount;

	public:
		PhoneBook (void);
		void	add_contact(Contact *contact);
		void	list_contacts(void);
};

#endif
