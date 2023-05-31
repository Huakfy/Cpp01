/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjourno <mjourno@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 21:04:07 by mjourno           #+#    #+#             */
/*   Updated: 2023/05/31 22:33:06 by mjourno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl () {
	return;
}

Harl::~Harl () {
	return;
}

void	Harl::debug( void ) {
	std::cout << "Debug message" << std::endl;
	return;
}

void	Harl::info( void ) {
	std::cout << "Info message" << std::endl;
	return;
}

void	Harl::warning( void ) {
	std::cout << "Warning message" << std::endl;
	return;
}

void	Harl::error( void ) {
	std::cout << "Error message" << std::endl;
	return;
}

void	Harl::complain(std::string level)
{
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*lvl[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	int i;
	for (i = 0; i < 4 && level != levels[i]; i++);
	if (i < 4)
		(this->*lvl[i])();
	return;
}
