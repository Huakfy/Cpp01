/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjourno <mjourno@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 14:53:30 by mjourno           #+#    #+#             */
/*   Updated: 2023/05/30 15:55:01 by mjourno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"
# include "iostream"

class HumanA {
	private:
		std::string		_name;
		const Weapon	&_weapon;
	public:
		HumanA(std::string name, const Weapon &weapon);
		~HumanA();
		void	attack() const;
};

#endif
