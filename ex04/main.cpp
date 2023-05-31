/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjourno <mjourno@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:15:40 by mjourno           #+#    #+#             */
/*   Updated: 2023/05/31 20:53:15 by mjourno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <cstring>

std::string	sed(std::string content, std::string s1, std::string s2) {
	std::string	result = "";
	for (long unsigned int i = 0; i < content.length(); i++)
	{
		if (content[i] == s1[0])
		{
			long unsigned int	j = 0;
			while (content[i + j] == s1[j])
				j++;
			if (j == (s1.length()))
			{
				result += s2;
				i += j - 1;
				continue;
			}
		}
		result += content[i];
	}
	return result;
}

const char	*outputName(char *input) {
	std::string	outputName = input;
	outputName += ".replace";
	const char* str = outputName.c_str();
	return str;
}

int	main(int ac, char **av) {
	if (ac != 4) {
		std::cout << "Need 3 parameters: filename, s1 and s2" << std::endl;
		return 1;
	}
	std::ifstream	inputStream (av[1]);
	if (inputStream.is_open()) {
		std::ofstream	outputStream (outputName(av[1]));
		std::string		s1 = av[2];
		std::string		s2 = av[3];
		std::string		content;
		while (inputStream)
		{
			if (!std::getline(inputStream, content))
				break;
			outputStream << sed(content, s1, s2) << std::endl;
		}
	}
	else
		std::cout << "Couldn't open file\n";
	return 0;
}
