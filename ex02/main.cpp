/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <ftholoza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 14:54:09 by francesco         #+#    #+#             */
/*   Updated: 2024/03/06 15:15:55 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
    std::cout << "FragTrap constructors tests:" << std::endl;
    FragTrap    a;
    FragTrap    b("bob");
    FragTrap    c = b;
    
    a = b;
    a.highFiveGuys();
    b.highFiveGuys();
    c.highFiveGuys();

    a.attack("punching bag");
    b.attack("punching bag");
    c.attack("punching bag");

    a.takeDamage(50);
    a.beRepaired(100);
    a.takeDamage(70);
    a.beRepaired(50);
    b.takeDamage(100);
    b.highFiveGuys();
    b.beRepaired(100);
    b.attack("punching bag");
    
    for (int i = 0; i < 100; i++)
        a.attack("punching bag");
    a.highFiveGuys();
    a.beRepaired(10);
    a.takeDamage(10);
    a.takeDamage(10);
    a.display();
    b.display();
    c.display();
}