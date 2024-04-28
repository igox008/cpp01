/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaassir <alaassir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 23:46:50 by alaassir          #+#    #+#             */
/*   Updated: 2024/04/29 00:11:29 by alaassir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	get_func_index(std::string level)
{
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0; i < 4;i++)
	{
		if (levels[i] == level)
			return i;
	}
	return (1337);
}

void	executeLevel(int index)
{
	Harl	lvl;
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	switch (index)
	{
	case 0:
		lvl.compling(levels[0]);
	case 1:
		lvl.compling(levels[1]);
	case 2:
		lvl.compling(levels[2]);
	case 3:
		lvl.compling(levels[3]);
		break ;
	default:
		std::cout << "[ Probably complaining about insignificant problems ]\n";
		break;
	}
}

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "[ Probably complaining about insignificant problems ]\n";
		return (0);
	}
	executeLevel(get_func_index(av[1]));
	return (0);
}