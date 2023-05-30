/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjourno <mjourno@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 14:17:51 by mjourno           #+#    #+#             */
/*   Updated: 2023/05/30 14:29:39 by mjourno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int	main(void)
{
	std::string	brain = "HI THIS IS BRAIN";
	std::string	*stringPTR = &brain;
	std::string	&stringREF = brain;

	std::cout << "Adresse de la string en mémoire:" << &brain << std::endl;
	std::cout << "Adresse stockée dans stringPTR:	" << stringPTR << std::endl;
	std::cout << "Adresse stockée dans stringREF:	" << &stringREF << std::endl;

	std::cout << std::endl;

	std::cout << "Valeur de la string:		" << brain << std::endl;
	std::cout << "Valeur pointée par stringPTR:	" << *stringPTR << std::endl;
	std::cout << "Valeur pointée par stringREF:	" << stringREF << std::endl;
	return 0;
}
