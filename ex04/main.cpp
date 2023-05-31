/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjourno <mjourno@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:15:40 by mjourno           #+#    #+#             */
/*   Updated: 2023/05/31 18:37:09 by mjourno          ###   ########.fr       */
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

		std::string	s1 = av[2];
		std::string	s2 = av[3];

		std::string	content;
		while (inputStream)
		{
			std::string	result = "";
			if (!std::getline(inputStream, content))
				break;
			for (long unsigned int i = 0; i < content.length(); i++)
			{
				if (content[i] == s1[0])
				{
					long unsigned int	j = 0;
					while (content[i + j] == s1[j])
						j++;
					if (j == (s1.length() - 1))
					{
						result += s2;
						i += j;
						continue;
					}
				}
				result += content[i];
			}
			outputStream << result << std::endl;
		}
	}
	else {
		std::cout << "Couldn't open file\n";
	}

	return 0;
}
