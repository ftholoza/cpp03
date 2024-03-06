/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <ftholoza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 12:59:15 by ftholoza          #+#    #+#             */
/*   Updated: 2024/03/06 15:50:07 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap("none_clap_name")
{
    std::cout << "DiamondTrap: default constructor: " << "none";
    std::cout << " created" << std::endl;
    this->_name = "none"; 
    return ;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name")
{
    std::cout << "DiamondTrap constructor called" << std::endl;
    this->_name = name; 
}

void    DiamondTrap::whoAmI(void)
{
    if (this->_hit_point <= 0)
    {
        std::cout << this->_name << "is DEAD he cant use whoAmI" << std::endl;
        return ;
    }
    std::cout << "My ClapTrap name is " << this->ClapTrap::_name << std::endl;
    std::cout << "My DiamondTrap name is " << this->_name << std::endl;
    return ;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << this->_name << " Destructor called" << std::endl;
    return ;
}
