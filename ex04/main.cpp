/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjourno <mjourno@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:15:40 by mjourno           #+#    #+#             */
/*   Updated: 2023/05/31 14:33:57 by mjourno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

#include <cstring>

int	main(int ac, char **av) {
	if (ac != 4)
	{
		std::cout << "Need 3 parameters: filename, s1 and s2" << std::endl;
		return 1;
	}


	std::ifstream	inputStream (av[1]);

	if (inputStream.is_open())
	{
		std::string	outputName = av[1];
		outputName += ".replace";
		const char* str = outputName.c_str();

		std::ofstream	outputStream (str);

		std::string	content;
		while (inputStream)
		{
			if (!std::getline(inputStream, content))
				break;
			outputStream << content << std::endl;
		}
	}
	else {
		std::cout << "Couldn't open file\n";
	}

	return 0;
}
