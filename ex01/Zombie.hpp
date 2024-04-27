/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaassir <alaassir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 22:15:08 by alaassir          #+#    #+#             */
/*   Updated: 2024/04/27 23:13:17 by alaassir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <iomanip>

class Zombie
{
    private:
        std::string name;
    public:
        void    announce(void);
        void    set_name(std::string _name);
        Zombie();
        ~Zombie();
};

Zombie* zombieHorde( int N, std::string name );

#endif