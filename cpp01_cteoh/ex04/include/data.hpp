/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cteoh <cteoh@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 17:26:34 by cteoh             #+#    #+#             */
/*   Updated: 2024/04/21 00:52:15 by cteoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

# include <iostream>
# include <fstream>
# include <string>

typedef struct	sData {
	std::string		file;
	std::string		s1;
	std::string		s2;
	std::ifstream	ifs;
	std::ofstream	ofs;
	sData(char *file, char *s1, char *s2);
	~sData(void);
	int		openFiles(void);
	void	alterContent(void);
}	tData;

#endif