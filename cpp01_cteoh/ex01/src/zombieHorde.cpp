/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cteoh <cteoh@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 20:23:08 by cteoh             #+#    #+#             */
/*   Updated: 2024/05/01 17:43:26 by cteoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name) {
	Zombie	*createdHorde = new Zombie[N];
	for (int i = 0; i < N; i++)
		createdHorde[i] = Zombie(name);
	return (createdHorde);
}
