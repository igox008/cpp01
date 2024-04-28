/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaassir <alaassir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 20:12:47 by alaassir          #+#    #+#             */
/*   Updated: 2024/04/28 21:19:59 by alaassir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string _name, Weapon &weapon) : weaponA(weapon) // must initialize any refference bofore entring the constructor body
{
    this->name = _name;
    std::cout << "HumanA get named " << _name << " and got " << weapon.getType() << " weapon!!" << std::endl;
}

HumanA::~HumanA()
{
    std::cout << "HumanA saying GoodByee!" << std::endl;
}

void	HumanA::attack(void)
{
	std::cout << this->name << " attacks with their " << this->weaponA.getType() << std::endl;
}

void	HumanA::setWeapon(Weapon _weapon)
{
	this->weaponA = _weapon;
}
