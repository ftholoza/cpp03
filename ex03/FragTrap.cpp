/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <ftholoza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 23:36:59 by francesco         #+#    #+#             */
/*   Updated: 2024/03/06 15:41:38 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap()
{
    std::cout << "FragTrap: default constructor: " << this->_name;
    std::cout << " created" << std::endl; 
    this->_max_hit_point = 100;
    this->_hit_point = 100;
    this->_energy_point = 100;
    this->_attack_damage = 30;
    return ;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap: " << this->_name << " destructor called" << std::endl;
    return ;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
    std::cout << "FragTrap: constructor ";
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

void    FragTrap::attack(const std::string& target)
    {
        if (this->_hit_point <= 0)
        {
            std::cout << "FragTrap: " << this->_name;
            std::cout << " is DEAD he can't attack !" << std::endl;
            return ;
        }
        if (this->_energy_point <= 0)
        {
            std::cout << "FragTrap: " << this->_name;
            std::cout << " need energy points to attack !" << std::endl;
            return ;   
        }
        std::cout << "FragTrap: " << this->_name << " attacks " << target;
        std::cout << ", causing " << this->_attack_damage;
        std::cout << " points of domage!" << std::endl;
        this->_energy_point--;
    }

void FragTrap::highFiveGuys(void)
{
    if (this->_hit_point <= 0)
    {
        std::cout << this->_name << " is DEAD he can't request highfive" << std::endl;
        return;
    }
    if (this->_energy_point <= 0)
    {
        std::cout << this->_name << " Need energy point to high five!" << std::endl;
        return ;
    }
    else
    {
        std::cout << this->_name << ": HighFive Guys !!" << std::endl;
    }
    this->_energy_point--;
    return ;
}
    