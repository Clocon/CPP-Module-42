/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumorale <lumorale@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 13:06:52 by lumorale          #+#    #+#             */
/*   Updated: 2023/05/03 09:59:03 by lumorale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv){
	if (argc == 1)
		std::cout << "* LOUD AND UNBREARABLE FEEDBACK NOISE *";
	else {
		for (int i = 1; i < argc; i++) {
			for (int j = 0; argv[i][j]; j++)
				std::cout << (char)toupper(argv[i][j]);
			if (i < argc - 1)
				std::cout << ' ';
		}
	}
	std::cout << std::endl;
	return (0);
}