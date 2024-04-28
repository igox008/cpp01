/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaassir <alaassir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 21:34:11 by alaassir          #+#    #+#             */
/*   Updated: 2024/04/28 22:58:13 by alaassir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

bool	open_and_replace(std::string str, std::string filename, std::string oldW, std::string newW)
{
	filename.append(".replace");
	std::ofstream output(filename);
	if (!output.is_open())
	{
		std::cout << "Can't Open file " << filename << std::endl;
		return (false);
	}
	size_t start = 0;
	size_t pos = str.find(oldW, start);
	while (pos != std::string::npos)
	{
		output << str.substr(start, pos - start) << newW;
		start = pos + oldW.size();
		pos = str.find(oldW, start);
	}
	output << str.substr(start);
	output.close();
	return (true);
}

int main(int ac, char **av)
{
	std::string	str;
	if (ac != 4)
	{
		std::cout << "Usage `./sed <filename> s1 s2`" << std::endl;
		return (1);
	}
	std::ifstream input(av[1]);
	if (!input.is_open())
	{
		std::cout << "can't open " << av[1] << std::endl;
		return (1);
	}
	std::string	tmp;
	while (std::getline(input, tmp))
	{
		if (!input.eof())
			tmp.append("\n");
		str += tmp;
		
	}
	input.close();
	if (!open_and_replace(str, std::string(av[1]), std::string(av[2]), std::string(av[3])))
		return (1);
	return (0);
}