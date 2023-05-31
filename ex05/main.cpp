/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjourno <mjourno@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 21:04:01 by mjourno           #+#    #+#             */
/*   Updated: 2023/05/31 22:31:46 by mjourno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main() {
	Harl	harl;
	std::cout << "Debug:" << std::endl;
	harl.complain("DEBUG");
	std::cout << "Info:" << std::endl;
	harl.complain("INFO");
	std::cout << "Warning:" << std::endl;
	harl.complain("WARNING");
	std::cout << "Error:" << std::endl;
	harl.complain("ERROR");
	return 0;
}
