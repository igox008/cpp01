/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaassir <alaassir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 19:48:10 by alaassir          #+#    #+#             */
/*   Updated: 2024/04/28 21:20:28 by alaassir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string _type)
{
    this->type = _type;
}

Weapon::~Weapon()
{
}

const std::string& Weapon::getType(void)
{
    return (this->type);
}

void    Weapon::setType(std::string _type)
{
    this->type = _type;
}