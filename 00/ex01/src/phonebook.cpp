/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumorale <lumorale@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 12:24:25 by lumorale          #+#    #+#             */
/*   Updated: 2023/05/03 17:20:30 by lumorale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/phonebook.hpp"

PhoneBook::PhoneBook(){
	
}

PhoneBook::~PhoneBook(){

}

void	PhoneBook::welcome(void) const {
	std::cout << std::endl;
	std::cout << "Welcome to your Phonebook" << std::endl;
	std::cout << std::endl;
	std::cout << "------------- USAGE -------------" << std::endl;
	std::cout << "ADD\t: To add a contact." << std::endl;
	std::cout << "SEARCH\t: To look for a contact." << std::endl;
	std::cout << "EXIT\t: To close the phonebook." << std::endl;
	std::cout << "---------------------------------" << std::endl;
	std::cout << std::endl;
}

void	PhoneBook::add(void)
{
	static int i;
	this->contacts[i % 8].init();
	this->contacts[i % 8].setIndex(i % 8);
	i++;
}

void	PhoneBook::print(void) const {
	std::cout << "<------------- PHONEBOOK CONTACTS ------------->" << std::endl;
	for (int i = 0; i < 8; i++)
		this->contacts[i].view(i);
	std::cout << std::endl;
}

int	PhoneBook::readInput(void) const {
	int		input;
	bool	valid = false;

	while (!valid){
		std::cout << "Enter a contact index: " << std::flush;
		std::cin >> input;
		if (std::cin.good() && input >= 0 && input <= 8)
			valid = true;
		else {
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "Invalid Index, please, try again." << std::endl;
		}
	}
	return (input);
}

void	PhoneBook::search(void) const {
	int	i = this->readInput();
	this->contacts[i].display(i);
}
