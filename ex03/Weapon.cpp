/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaassir <alaassir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 19:48:10 by alaassir          #+#    #+#             */
/*   Updated: 2024/05/29 13:58:28 by alaassir         ###   ########.fr       */
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

const std::string& Weapon::getType(void) const
{
    return (this->type);
}

void    Weapon::setType(std::string _type)
{
    this->type = _type;
}