/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <ftholoza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 00:37:41 by francesco         #+#    #+#             */
/*   Updated: 2024/03/06 15:47:41 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <string>

class DiamondTrap: public ScavTrap, public FragTrap
{
    public:
        DiamondTrap();
        ~DiamondTrap();
        DiamondTrap(std::string _name);
        using ScavTrap::attack;
        using FragTrap::highFiveGuys;
        using ScavTrap::guardgate;
        using ClapTrap::takeDamage;
        using ClapTrap::display;
        using ClapTrap::beRepaired;
        void    whoAmI(void);        
    private:
        std::string     _name;
        using FragTrap::_max_hit_point;
        using FragTrap::_hit_point;
        using ScavTrap::_energy_point;
        using FragTrap::_attack_damage;
};

#endif