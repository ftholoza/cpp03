/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <ftholoza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 14:20:07 by francesco         #+#    #+#             */
/*   Updated: 2024/03/06 15:38:38 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

    ScavTrap::ScavTrap(): ClapTrap()
    {
        this->_max_hit_point = 100;
        this->_hit_point = 100;
        this->_energy_point = 50;
        this->_attack_damage = 20;
        this->_guardgate = false;
        return ;
    }

    ScavTrap::~ScavTrap()
    {
        std::cout << "ScavTrap: " << this->_name << " destructor called" << std::endl;
        return ;
    }

    ScavTrap::ScavTrap(std::string name): ClapTrap(name)
    {
        std::cout << "ScavTrap: " << name << " created" << std::endl;
        this->_max_hit_point = 100;
        this->_hit_point = 100;
        this->_energy_point = 50;
        this->_attack_damage = 20;    
        this->_guardgate = false;
        return ;
    }
    
    ScavTrap::ScavTrap(const ScavTrap &to_copy): ClapTrap(to_copy)
    {
        std::cout << "Copy constructor called: ScavTrap: " << this->_name;
        std::cout << " created" << std::endl;
        return ;
    }

    void    ScavTrap::attack(const std::string& target)
    {
        if (this->_hit_point <= 0)
        {
            std::cout << "ScavTrap: " << this->_name;
            std::cout << " is DEAD he can't attack !" << std::endl;
            return ;
        }
        if (this->_energy_point <= 0)
        {
            std::cout << "ScavTrap: " << this->_name;
            std::cout << " need energy points to attack !" << std::endl;
            return ;   
        }
        std::cout << "ScavTrap: " << this->_name << " attacks " << target;
        std::cout << ", causing " << this->_attack_damage;
        std::cout << " points of domage!" << std::endl;
        this->_energy_point--;
    }
    
    void ScavTrap::guardgate()
    {
        if (this->_hit_point <= 0)
        {
            std::cout << this->_name << ": is dead he can't use his special capacity" << std::endl;
            return ;
        }
        if (this->_energy_point <= 0)
        {
            std::cout << this->_name << ": need energy for his special capacity" << std::endl;
            return ;
        }
        if (!this->_guardgate)
        {
            std::cout << this->_name << ": Gate keeper mode activated" << std::endl;
            this->_guardgate = true;
            this->_energy_point--;
        }
        else
        {
            std::cout << this->_name << " :Gate keeper mode disable" << std::endl;
            this->_energy_point--;
        }
        return ;
    }
