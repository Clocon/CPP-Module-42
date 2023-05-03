/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumorale <lumorale@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 10:24:15 by lumorale          #+#    #+#             */
/*   Updated: 2023/05/03 18:07:16 by lumorale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/contact.hpp"

Contact::Contact(){

}

Contact::~Contact(){

}

std::string Contact::getInput(std::string str) const {
	std::string	input = "";
	bool		valid = false;

	while (!valid){
		std::cout << str << std::flush;
		std::getline(std::cin, input);
		if (std::cin.good() && !input.empty())
			valid = true;
		else {
			std::cin.clear();
			std::cout << "Invalid Input, please, try again." << std::endl;
		}
	}
	return (input);
}

void	Contact::init(void)
{
	std::cin.ignore();
	this->Fname = getInput("Enter your first name: ");
	this->Lname = getInput("Enter your last name: ");
	this->nick = getInput("Enter your nick-name: ");
	this->number = getInput("Enter your phone-number: ");
	std::cout << std::endl;
}

void	Contact::setIndex(int i){
	this->index = i;
}

std::string	Contact::printLen(std::string str) const {
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	return (str);
}

void	Contact::view(int index) const {
	if (this->Fname.empty() || this->Lname.empty() || this->number.empty())
		return ;
	std::cout << "|" << std::setw(10) << index << std::flush;
	std::cout << "|" << std::setw(10) << this->printLen(this->Fname) << std::flush;
	std::cout << "|" << std::setw(10) << this->printLen(this->Lname) << std::flush;
	std::cout << "|" << std::setw(10) << this->printLen(this->nick) << std::flush;
	std::cout << "|" << std::endl;
}

void	Contact::display(int index) const {
	if (this->Fname.empty() || this->Lname.empty() || this->number.empty())
		return ;
	std::cout << std::endl;
	std::cout << "---->> CONTACT" << index << "<<----" << std::endl;
	std::cout << "First Name\t" << this->Fname << std::endl;
	std::cout << "Last Name\t" << this->Lname << std::endl;
	std::cout << "Nick\t\t" << this->nick << std::endl;
	std::cout << std::endl;
}
