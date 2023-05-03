/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumorale <lumorale@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 11:55:39 by lumorale          #+#    #+#             */
/*   Updated: 2023/05/03 12:23:36 by lumorale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "contact.hpp"

class PhoneBook {
	private:
		Contact	contacts[8];
		int		readInput(void) const;
	public:
		PhoneBook();
		~PhoneBook();
		void	add();
		void	print() const;
		void	search() const;
		void	welcome() const;	
};

#endif