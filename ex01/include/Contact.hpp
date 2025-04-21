/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svereten <svereten@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 14:15:04 by svereten          #+#    #+#             */
/*   Updated: 2025/04/21 12:19:09 by svereten         ###   ########.fr       */
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
		Contact (void);
		Contact (
			std::string first_name,
			std::string last_name,
			std::string nickname,
			std::string phone_number,
			std::string secret
		);
		void	operator=(Contact contact);
		void	set_first_name(std::string str);
		void	set_last_name(std::string str);
		void	set_nickname(std::string str);
		void	set_phone_number(std::string str);
		void	set_secret(std::string str);
		void	display_full(void);
		void	display_less(int i);
};

#endif
