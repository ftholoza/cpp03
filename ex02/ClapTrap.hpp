/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <ftholoza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 02:36:19 by francesco         #+#    #+#             */
/*   Updated: 2024/03/06 15:36:52 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include "iostream"

class ClapTrap
{
    protected:
        std::string _name;
        int          _max_hit_point;
        int         _hit_point;
        int         _energy_point;
        int         _attack_damage;
    public:
        ClapTrap();
        ~ClapTrap();
        void    display();
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap &to_copy);
        ClapTrap& operator=(ClapTrap const &to_copy);
        void    attack(std::string const &target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
};

#endif