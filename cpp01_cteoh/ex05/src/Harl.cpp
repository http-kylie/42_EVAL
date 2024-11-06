/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cteoh <cteoh@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 00:54:33 by cteoh             #+#    #+#             */
/*   Updated: 2024/07/28 17:39:55 by cteoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

const std::string	Harl::_levels[LEVELS] = {"DEBUG", "INFO", "WARNING", "ERROR"};

void	Harl::debug(void) {
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-\
pickle-special ketchup burger. I really do!" << std::endl;
}

void	Harl::info(void) {
	std::cout << "I cannot believe adding extra bacon costs more money. You\
 didn't put enough bacon in my burger! If you did, I wouldn't be asking for\
 more!" << std::endl;
}

void	Harl::warning(void) {
	std::cout << "I think I deserve to have some extra bacon for free. I've\
 been coming for years whereas you started working here since last month.\
" << std::endl;
}

void	Harl::error(void) {
	std::cout << "This is unacceptable! I want to speak to the manager now.\
" << std::endl;
}

Harl::Harl(void) {}

Harl::~Harl(void) {}

void	Harl::complain(std::string level) {
	void	(Harl::*const ptr[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	for (int i = 0; i < 4; i++) {
		if (_levels[i].compare(level) == 0) {
			(this->*ptr[i])();
			break ;	
		}
	}
}
