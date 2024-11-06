/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cteoh <cteoh@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 01:24:26 by cteoh             #+#    #+#             */
/*   Updated: 2024/08/16 22:00:26 by cteoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.cpp"

static int	writeError(std::string err) {
	std::cerr << err << std::endl;
	return (1);
}

int	main(int argc, char **argv) {
	if (argc < 2 || argc > 2)
		return (writeError("Only 1 argument accepted."));
	
	Harl		harl;
	std::string	level(argv[1]);
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int			numLevel;

	for (numLevel = 0; numLevel < 4; numLevel++) {
		if (levels[numLevel].compare(level) == 0)
			break ;
	}
	/*	C++98 does not have an intential fallthrough attribute for switch
		statements, like [[fallthrough]] in C++17 and above. However, C does
		so we would use C-style here. It is possible to not write anything and
		let it fallthrough "naturally" but some compilers like gcc would prompt
		a warning about it.	*/
	switch (numLevel) {
		case 0:
			std::cout << "[ " << levels[0] << " ]\n";
			harl.complain(levels[0]);
			std::cout << std::endl;
			__attribute__((fallthrough));
		case 1:
			std::cout << "[ " << levels[1] << " ]\n";
			harl.complain(levels[1]);
			std::cout << std::endl;
			__attribute__((fallthrough));
		case 2:
			std::cout << "[ " << levels[2] << " ]\n";
			harl.complain(levels[2]);
			std::cout << std::endl;
			__attribute__((fallthrough));
		case 3:
			std::cout << "[ " << levels[3] << " ]\n";
			harl.complain(levels[3]);
			std::cout << std::endl;
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;			
	}
	return (0);
}