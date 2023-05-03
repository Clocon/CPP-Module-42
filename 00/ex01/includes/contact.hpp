/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumorale <lumorale@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 10:11:44 by lumorale          #+#    #+#             */
/*   Updated: 2023/05/03 17:38:25 by lumorale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <iomanip>

class Contact{
	private:
		std::string	Fname;
		std::string	Lname;
		std::string	nick;
		std::string	number;
		int			index;
		
		std::string	printLen(std::string str) const;
		std::string	getInput(std::string str) const;
	public:
		Contact();
		~Contact();
		void	init(void);
		void	view(int index) const;
		void	display(int index) const;
		void	setIndex(int i);
};

#endif