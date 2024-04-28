/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaassir <alaassir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 19:43:29 by alaassir          #+#    #+#             */
/*   Updated: 2024/04/28 20:21:16 by alaassir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <iomanip>

class Weapon
{
	private:
		std::string	type;
	public:
		const std::string& getType(void);
		void	setType(std::string _type);
		Weapon(std::string _type);
		Weapon();
		~Weapon();
};


#endif
