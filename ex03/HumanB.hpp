/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaassir <alaassir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 19:53:51 by alaassir          #+#    #+#             */
/*   Updated: 2024/04/28 21:24:30 by alaassir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include <iomanip>
#include "Weapon.hpp"

class HumanB
{
    private:
        Weapon *WeaponB;
        std::string name;
    public:
        void    attack(void);
        void    setWeapon(Weapon &_weapon);
        HumanB(std::string _name);
        ~HumanB();
};


#endif