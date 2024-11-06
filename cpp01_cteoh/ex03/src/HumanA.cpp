/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cteoh <cteoh@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 00:42:06 by cteoh             #+#    #+#             */
/*   Updated: 2024/04/20 01:25:35 by cteoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &newWeapon) : name(name), weapon(newWeapon) {}

HumanA::~HumanA(void) {}

void	HumanA::attack(void) const {
	std::cout << this->name << " attacks with their ";
	std::cout << this->weapon.getType() << std::endl;
}

