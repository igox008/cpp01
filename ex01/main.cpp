/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaassir <alaassir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 23:02:43 by alaassir          #+#    #+#             */
/*   Updated: 2024/05/29 13:48:08 by alaassir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie *Z = zombieHorde(15, "IGOX008");
    for (int i = 0; i < 15;i++)
        Z[i].announce();
    delete [] Z;    
}