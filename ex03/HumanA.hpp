/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaassir <alaassir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 20:09:44 by alaassir          #+#    #+#             */
/*   Updated: 2024/04/28 21:14:58 by alaassir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include <iomanip>
#include "Weapon.hpp"

class HumanA
{
	private:
		Weapon &weaponA;
		std::string name;
	public:
		void	attack(void);
		void    setWeapon(Weapon _weapon);
		HumanA(std::string _name, Weapon &weapon);
		~HumanA();
};


#endif