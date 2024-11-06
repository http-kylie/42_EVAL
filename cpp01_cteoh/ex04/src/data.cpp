/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cteoh <cteoh@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 17:33:02 by cteoh             #+#    #+#             */
/*   Updated: 2024/08/15 01:06:08 by cteoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "data.hpp"

sData::sData(char *file, char *s1, char *s2) : file(file), s1(s1), s2(s2) {}

sData::~sData(void) {
	this->ifs.close();
	this->ofs.close();
}

int		sData::openFiles(void) {
	this->ifs.open(this->file.c_str());
	if (this->ifs.is_open() == false) {
		std::cerr << "Failed to open input file." << std::endl;
		return (1);
	}
	this->file.append(".replace");
	this->ofs.open(this->file.c_str(), std::ios_base::trunc);
	if (this->ofs.is_open() == false) {
		std::cerr << "Failed to open output file." << std::endl;
		return (1);
	}
	this->ofs.close();
	this->ofs.open(this->file.c_str(), std::ios_base::app);
	return (0);
}

void	sData::alterContent(void) {
	std::string	content;
	// std::string	*content = new std::string;
	std::getline(this->ifs, content, '\0');

	std::string	substr;
	std::size_t	initialPos = 0;
	std::size_t	finalPos = 0;
	std::size_t	s1Length = s1.length();
	std::size_t	s2Length = s2.length();
			
	while (true) {
		finalPos = content.find(s1, initialPos);
		if (finalPos == std::string::npos)
			break ;
		substr = content.substr(initialPos, finalPos - initialPos);
		this->ofs.write(substr.c_str(), substr.length());
		this->ofs.write(s2.c_str(), s2Length);
		initialPos = finalPos + s1Length;
	}
	substr = content.substr(initialPos);
	this->ofs.write(substr.c_str(), substr.length());
}
