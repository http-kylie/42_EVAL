/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cteoh <cteoh@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 00:20:54 by cteoh             #+#    #+#             */
/*   Updated: 2024/04/20 01:13:26 by cteoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) {
	this->type = type;
}

Weapon::~Weapon(void) {}

std::string const	&Weapon::getType(void) const {
	return (this->type);
}

void	Weapon::setType(std::string newType) {
	this->type = newType;
}
