/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumorale <lumorale@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 11:51:23 by lumorale          #+#    #+#             */
/*   Updated: 2023/05/03 19:15:17 by lumorale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/contact.hpp"

#include "../includes/phonebook.hpp"

int	main(void) {
	PhoneBook	book;
	std::string	input;
	std::string	tmp;
	book.welcome();
	while (input.compare("EXIT") && input.compare("exit")) {
		if (!input.compare("ADD") || !input.compare("add"))
			book.add();
		else if (!input.compare("SEARCH") || !input.compare("search")) {
			book.print();
			book.search();
		}
		std::cout << "> " << std::flush;
		std::cin >> input;
		
	}
	return 0;
}