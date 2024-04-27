/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaassir <alaassir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 22:15:08 by alaassir          #+#    #+#             */
/*   Updated: 2024/04/27 23:01:58 by alaassir         ###   ########.fr       */
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
        Zombie(std::string _name);
        ~Zombie();
};

Zombie* newZombie( std::string name );
void    randomChump( std::string name );


#endif