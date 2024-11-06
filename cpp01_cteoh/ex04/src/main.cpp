/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cteoh <cteoh@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 03:14:24 by cteoh             #+#    #+#             */
/*   Updated: 2024/04/21 01:56:32 by cteoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "data.hpp"

static int	writeError(std::string err) {
	std::cerr << err << std::endl;
	return (1);
}

int	main(int argc, char **argv) {
	if (argc < 4 || argc > 4)
		return (writeError("Only 3 arguments accepted."));

	tData	data(argv[1], argv[2], argv[3]);
	
	if (data.openFiles())
		return (1);
	data.alterContent();
	return (0);
}