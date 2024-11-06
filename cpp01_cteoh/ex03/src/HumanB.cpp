/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cteoh <cteoh@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 00:53:15 by cteoh             #+#    #+#             */
/*   Updated: 2024/05/01 22:28:15 by cteoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name), weapon(NULL) {}

HumanB::~HumanB(void) {}

void	HumanB::attack(void) const {
	std::cout << this->name << " attacks with their ";
	if (this->weapon == NULL)
		std::cout << "fists" << std::endl;
	else
		std::cout << this->weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &newWeapon) {
	this->weapon = &newWeapon;
}
