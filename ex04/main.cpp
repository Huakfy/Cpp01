/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjourno <mjourno@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:15:40 by mjourno           #+#    #+#             */
/*   Updated: 2023/06/14 18:58:59 by mjourno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <cstring>

std::string	sed(std::string content, std::string s1, std::string s2) {
	int	i = 0;

	while ((i = content.find(s1, i)) != -1) {
		content.erase(i, s1.length());
		content.insert(i, s2);
		i += s2.length();
	}
	return content;
}

int	main(int ac, char **av) {
	if (ac != 4) {
		std::cerr << "Need 3 parameters: filename, s1 and s2" << std::endl;
		return 1;
	}

	std::ifstream	inputStream(av[1]);
	if (!inputStream.is_open()) {
		std::cerr << "Couldn't open input file" << std::endl;
		return 1;
	}

	std::string	outputName = av[1];
	outputName += ".replace";
	std::ofstream	outputStream(outputName.c_str(), std::ios::out | std::ios::trunc);
	if (!outputStream.is_open()) {
		std::cerr << "Couldn't open output file" << std::endl;
		return 1;
	}

	std::string		s1 = av[2];
	std::string		s2 = av[3];
	if (s1.empty() || s2.empty()) {
		std::cerr << "Empty strings" << std::endl;
		return 1;
	}

	std::string		content;
	while (inputStream)
	{
		if (!std::getline(inputStream, content))
			break;
		outputStream << sed(content, s1, s2) << std::endl;
	}

	return 0;
}
