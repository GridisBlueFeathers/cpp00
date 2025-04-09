/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svereten <svereten@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 15:41:59 by svereten          #+#    #+#             */
/*   Updated: 2025/04/09 09:06:04 by svereten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook {
	private:
		Contact _book[8];
		int		_contacts_amount;
		int		_oldest_idx;

	public:
		PhoneBook (void);
		bool	add_contact(void);
		bool	list_contacts(void);
};

#endif
