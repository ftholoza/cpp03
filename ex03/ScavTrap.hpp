/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francesco <francesco@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 14:05:40 by francesco         #+#    #+#             */
/*   Updated: 2024/03/03 22:06:01 by francesco        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{   
    private:
        bool _guardgate;
    public:
        ScavTrap();
        //~ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(ScavTrap const &to_copy);
        void    guardgate();
};

#endif