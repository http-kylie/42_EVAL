/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cteoh <cteoh@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 21:03:33 by cteoh             #+#    #+#             */
/*   Updated: 2024/05/01 18:00:33 by cteoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void) {
	std::string	brain = "HI THIS IS BRAIN";
	std::string	*stringPTR = &brain;
	std::string &stringREF = brain;

	std::cout << "Memory address of:\n";
	std::cout << "string: \t" << &brain << std::endl;
	std::cout << "stringPTR: \t" << stringPTR << std::endl;
	std::cout << "stringREF: \t" << &stringREF << std::endl;

	std::cout << "\nValue of:\n";
	std::cout << "string: \t" << brain << std::endl;
	std::cout << "stringPTR: \t" << *stringPTR << std::endl;
	std::cout << "stringREF: \t" << stringREF << std::endl;
	return (0);
}