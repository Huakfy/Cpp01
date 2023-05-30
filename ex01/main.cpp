/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjourno <mjourno@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 11:42:03 by mjourno           #+#    #+#             */
/*   Updated: 2023/05/30 13:21:41 by mjourno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*zombiehorde = zombieHorde( 42, "hrd" );
	for (int i = 0; i < 42; i++)
		zombiehorde[i].announce();
	delete [] zombiehorde;
	return (0);
}
