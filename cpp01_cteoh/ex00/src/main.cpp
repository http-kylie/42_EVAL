/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cteoh <cteoh@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 18:46:33 by cteoh             #+#    #+#             */
/*   Updated: 2024/05/01 17:38:30 by cteoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void) {
	Zombie	*zombieOne;

	std::cout << "Creating Jack on stack with randomChump()..." << std::endl;
	randomChump("Jack");
	std::cout << "Creating Bob on heap with newZombie()..." << std::endl;
	zombieOne = newZombie("Bob");
	zombieOne->announce();
	delete(zombieOne);
	return (0);
}