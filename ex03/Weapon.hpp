/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjourno <mjourno@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 14:37:06 by mjourno           #+#    #+#             */
/*   Updated: 2023/05/30 15:54:34 by mjourno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Weapon_HPP
# define Weapon_HPP

# include <string>

class Weapon {
	private:
		std::string	_type;
	public:
		Weapon();
		Weapon(std::string weapon);
		~Weapon();
		const std::string	&getType() const;
		void				setType(std::string type);
};

#endif
