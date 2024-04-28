/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaassir <alaassir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 19:59:11 by alaassir          #+#    #+#             */
/*   Updated: 2024/04/28 21:24:17 by alaassir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string _name)
{
	this->name = _name;
	std::cout << "HumanB get named " << _name << " !!" << std::endl;
}

HumanB::~HumanB()
{
	std::cout << "HumanB saying GoodByee!" << std::endl;
}

void	HumanB::attack(void)
{
	std::cout << this->name << " attacks with their " << this->WeaponB->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &_weapon)
{
	this->WeaponB = &_weapon;
}