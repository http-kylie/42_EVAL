/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cteoh <cteoh@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 00:20:06 by cteoh             #+#    #+#             */
/*   Updated: 2024/04/20 01:19:02 by cteoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class	HumanA {
		std::string	name;
		Weapon 		&weapon;
	public:
		HumanA(std::string name, Weapon &newWeapon);
		~HumanA(void);
		void	attack(void) const;
};

#endif