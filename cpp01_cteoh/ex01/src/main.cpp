/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cteoh <cteoh@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 18:46:33 by cteoh             #+#    #+#             */
/*   Updated: 2024/05/01 17:57:18 by cteoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void) {
	Zombie	*zombieArray;
	int		zombieNumber;

	zombieNumber = 4;
	zombieArray = zombieHorde(zombieNumber, "Jack");
	for (int i = 0; i < zombieNumber; i++)
		zombieArray[i].announce();
	// zombieArray[4].announce();
	delete [] zombieArray;
	return (0);
}