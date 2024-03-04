/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francesco <francesco@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 03:59:15 by francesco         #+#    #+#             */
/*   Updated: 2024/03/03 16:32:53 by francesco        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


    ClapTrap::ClapTrap(): _name("none")
    {
        std::cout << "Default constructor: ClapTrap created" << std::endl;
        this->_hit_point = 10;
        this->_energy_point = 10;
        this->_attack_damage = 0;
        return ;
    }

    ClapTrap::~ClapTrap()
    {
        std::cout << "Destructor called" << std::endl;
    }

    ClapTrap::ClapTrap(std::string name): _name(name)
    {
        std::cout << "ClapTrap: " << name << " created" << std::endl;
        this->_hit_point = 10;
        this->_energy_point = 10;
        this->_attack_damage = 0;    
        return ;
    }
    
    ClapTrap:: ClapTrap(const ClapTrap &to_copy): _name(to_copy._name)
    {
        std::cout << "Copy constructor called: ClapTrap: " << this->_name;
        std::cout << " created" << std::endl;
        *this = to_copy;
        return ;
    }
    
    ClapTrap& ClapTrap::operator=(ClapTrap const &to_copy)
    {
        std::cout << "Copy assignment operator called" << std::endl;
        if (this != &to_copy)
        {
            this->_attack_damage = to_copy._attack_damage;
            this->_energy_point = to_copy._energy_point;
            this->_hit_point = to_copy._hit_point;
            this->_name = to_copy._name;
        }
        return (*this);
    }

    void    ClapTrap::display()
    {
        std::cout << "_______________________________________" << std::endl;
        std::cout << "|          CLAPTRAP INFOS             |" << std::endl;
        std::cout << "---------------------------------------" << std::endl;
        std::cout << "name: " << this->_name << std::endl;
        if (this->_hit_point <= 0)
            std::cout << "health: DEAD" << std::endl;
        else
            std::cout << "health: " << this->_hit_point << std::endl;
        std::cout << "energy: " << this->_energy_point << std::endl;
        std::cout << "attack: " << this->_attack_damage << std::endl;
        std::cout << "---------------------------------------" << std::endl;
        return ;
    }
    
    void    ClapTrap::attack(const std::string& target)
    {
        if (this->_energy_point <= 0)
        {
            std::cout << "ClapTrap: " << this->_name;
            std::cout << " need energy points to attack !" << std::endl;
            return ;   
        }
        std::cout << "ClapTrap: " << this->_name << " attacks " << target;
        std::cout << ", causing " << this->_attack_damage;
        std::cout << " points of domage!" << std::endl;
        this->_energy_point--;
    }
    
    void    ClapTrap::takeDamage(unsigned int amount)
    {
        if ((int)amount < 0)
        {
            std::cout << "error" << std::endl;
            return;
        }
        if ((this->_hit_point - (int)amount) <= 0)
        {
            this->_hit_point = 0;
            std::cout << "ClapTrap: " << this->_name << " is DEAD" << std::endl;
            return ; 
        }
        std::cout << "ClapTrap: " << this->_name << " took ";
        std::cout << amount << " of dommage" << std::endl;
        this->_hit_point -= (int)amount;
        if (this->_hit_point < 0)
            this->_hit_point = 0;
        return ;
    }
    
    void    ClapTrap::beRepaired(unsigned int amount)
    {
        if ((int)amount < 0)
        {
            std::cout << "error" << std::endl;
            return ;
        }
        if (this->_hit_point == 10)
        {
            std::cout << "ClapTrap: " << this->_name << " is already full_life" << std::endl;
            return; 
        }
        if (this->_hit_point <= 0)
        {
            std::cout << "ClapTrap: " << this->_name << " is Dead";
            std::cout << " he cant repair" << std::endl;
            return ;
        }
        if (this->_energy_point <= 0)
        {
            std::cout << "ClapTrap: " << this->_name << " need energy points to repair" << std::endl;
            return;
        }
        int i = 10 - this->_hit_point;
        if (amount < i)
            i = amount;
        std::cout << "ClapTrap: " << this->_name << " regained ";
        std::cout << i << " of health" << std::endl;
        _hit_point += i;
        _energy_point--;
        return ;
    }