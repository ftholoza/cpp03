/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francesco <francesco@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 00:37:41 by francesco         #+#    #+#             */
/*   Updated: 2024/03/04 00:48:58 by francesco        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap: public ClapTrap, public ScavTrap, public FragTrap
{
    public:
        DiamondTrap();
        DiamondTrap(std::string const &_name);
        DiamondTrap(DiamondTrap const &to_copy);
        
        
};

#endif