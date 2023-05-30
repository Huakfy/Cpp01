/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjourno <mjourno@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 11:42:03 by mjourno           #+#    #+#             */
/*   Updated: 2023/05/30 12:03:51 by mjourno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	zombie("zmb");
	zombie.announce();

	Zombie *newzombie = newZombie("newzmb");
	newzombie->announce();
	delete(newzombie);

	randomChump("rndmchmp");
	return (0);
}
