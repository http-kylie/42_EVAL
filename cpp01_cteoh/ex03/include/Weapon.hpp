/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cteoh <cteoh@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 00:16:39 by cteoh             #+#    #+#             */
/*   Updated: 2024/04/20 01:13:33 by cteoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>
# include <iostream>

class	Weapon {
		std::string	type;
	public:
		Weapon(std::string type);
		~Weapon(void);
		std::string const	&getType(void) const;
		void				setType(std::string newType);
};

#endif