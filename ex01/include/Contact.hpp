/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svereten <svereten@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 14:15:04 by svereten          #+#    #+#             */
/*   Updated: 2025/04/05 12:01:55 by svereten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>

class Contact {
	private:
		std::string _first_name;
		std::string _last_name;
		std::string _nickname;
		std::string _phone_number;
		std::string _secret;

	public:
		Contact ();
		Contact (
			std::string first_name,
			std::string last_name,
			std::string nickname,
			std::string phone_number,
			std::string secret
		);
		void		display_full(void);
		void		display_less(int i);
		std::string	get_first_name(void);
		std::string	get_last_name(void);
		std::string	get_nickname(void);
};

#endif
