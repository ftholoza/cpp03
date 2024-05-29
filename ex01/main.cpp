/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <ftholoza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 14:54:09 by francesco         #+#    #+#             */
/*   Updated: 2024/05/29 20:23:31 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    std::cout << "creation ClapTrap" << std::endl;
    ClapTrap pika("Pikachou");
    ClapTrap cara("Carapuce");
    ClapTrap sala("Salamèche");
    std::cout << "creation ScavTrap" << std::endl;
    ScavTrap alv("TeamRocket Alvin");
    ScavTrap bob("TeamRocket Bob");
    ScavTrap kev("TeamRocket Kevin");

    pika.attack("Bob");
    alv.takeDamage(0);
    alv.attack("Pika");
    pika.takeDamage(20);
    for (int i = 0; i < 10; i++)
    {
        alv.attack("Pika");
        pika.takeDamage(20);
    }
    int j = 0;
    while (j < 10)
    {
        bob.attack("Alvin");
        alv.takeDamage(20);
        j++;
    }
    alv.beRepaired(100);
    pika.beRepaired(100);
    bob.attack("Kevin");
    kev.takeDamage(70);
    kev.beRepaired(100);
    for (int i = 0; i < 5; i++)
    {
        bob.attack("Kevin");
        kev.takeDamage(10);
    }
    kev.beRepaired(-5);
    kev.beRepaired(20);
    for (int i = 0; i < 40; i++)
    {
        bob.attack("le mur");
        bob.takeDamage(1);
        bob.beRepaired(20);
    }
    cara.attack("Bob");
    bob.takeDamage(77);
    for (int i = 0; i < 5; i++)
    {
        bob.guardgate();
        kev.guardgate();
        alv.guardgate();
    }
    kev.display();
    bob.display();
    alv.display();
    pika.display();
    cara.display();
    sala.display();
    
    std::cout << "Constructors tests" << std::endl;
    ClapTrap    a("Jean");
    ClapTrap    b = a;
    ClapTrap    c(b);
    ClapTrap    d("Pilou");
    d = a;
    ScavTrap    e("Martin");
    ScavTrap    f = e;
    ScavTrap    g;
    g = e;
  
    a.display();
    b.display();
    c.display();
    d.display();
    e.display();
    f.display();
    g.display();
    
}