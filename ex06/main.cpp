/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjourno <mjourno@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 21:04:01 by mjourno           #+#    #+#             */
/*   Updated: 2023/05/31 23:10:28 by mjourno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **av) {
	if (ac != 2)
	{
		std::cout << "Enter one parameter, no more no less." << std::endl;
		return (0);
	}
	std::string	lvl = av[1];
	std::string	lvls[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int	i;
	for (i = 0; i < 4 && lvl != lvls[i]; i++);
	Harl	harl;
	switch (i) {
		case 0:
			std::cout << "[ DEBUG ]" << std::endl;
			harl.complain("DEBUG");
			std::cout << "\n[ INFO ]" << std::endl;
			harl.complain("INFO");
			std::cout << "\n[ WARNING ]" << std::endl;
			harl.complain("WARNING");
			std::cout << "\n[ ERROR ]" << std::endl;
			harl.complain("ERROR");
			break;
		case 1:
			std::cout << "[ INFO ]" << std::endl;
			harl.complain("INFO");
			std::cout << "\n[ WARNING ]" << std::endl;
			harl.complain("WARNING");
			std::cout << "\n[ ERROR ]" << std::endl;
			harl.complain("ERROR");
			break;
		case 2:
			std::cout << "[ WARNING ]" << std::endl;
			harl.complain("WARNING");
			std::cout << "\n[ ERROR ]" << std::endl;
			harl.complain("ERROR");
			break;
		case 3:
			std::cout << "[ ERROR ]" << std::endl;
			harl.complain("ERROR");
			break;
		case 4:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}
	return 0;
}
