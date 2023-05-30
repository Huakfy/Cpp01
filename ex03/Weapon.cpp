/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjourno <mjourno@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 14:46:12 by mjourno           #+#    #+#             */
/*   Updated: 2023/05/30 15:54:28 by mjourno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() {
	return;
}

Weapon::Weapon(std::string weapon) {
	this->_type = weapon;
	return;
}

Weapon::~Weapon() {
	return;
}

const std::string	&Weapon::getType() const {
	return (this->_type);
}

void	Weapon::setType(std::string type) {
	this->_type = type;
	return;
}
