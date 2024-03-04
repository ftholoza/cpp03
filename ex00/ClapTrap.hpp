/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francesco <francesco@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 02:36:19 by francesco         #+#    #+#             */
/*   Updated: 2024/03/02 15:06:07 by francesco        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include "iostream"

class ClapTrap
{
    private:
        std::string _name;
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
        void    attack(const std::string& target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
};

#endif