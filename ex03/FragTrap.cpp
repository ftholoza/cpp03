/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francesco <francesco@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 23:36:59 by francesco         #+#    #+#             */
/*   Updated: 2024/03/03 23:58:51 by francesco        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap()
{
    std::cout << "FragTrap default constructor: " << this->_name;
    std::cout << " created" << std::endl; 
    this->_max_hit_point = 100;
    this->_hit_point = 100;
    this->_energy_point = 100;
    this->_attack_damage = 30;
    return ;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
    std::cout << "FragTrap constructor called: ";
    std::cout << name << " created" << std::endl;
    this->_max_hit_point = 100;
    this->_hit_point = 100;
    this->_energy_point = 100;
    this->_attack_damage = 30;
    return ;
}
    
FragTrap::FragTrap(const FragTrap &to_copy): ClapTrap(to_copy)
{
    std::cout << "Copy constructor called: FragTrap: " << this->_name;
    std::cout << " created" << std::endl;
    return ;
}

void FragTrap::highFiveGuys(void)
{
    if (this->_hit_point <= 0)
    {
        std::cout << this->_name << " is Dead he can't request highfive" << std::endl;
        return;
    }
    else
    {
        std::cout << this->_name << ": HighFive Guys !!" << std::endl;
    }
    return ;
}
    