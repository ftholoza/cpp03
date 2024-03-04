/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francesco <francesco@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 14:54:09 by francesco         #+#    #+#             */
/*   Updated: 2024/03/03 13:15:08 by francesco        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
    std::cout << "CONSTRUCTORS TESTS" << std::endl;
    ClapTrap    none;
    ClapTrap    pika("Pikachou");
    ClapTrap    pika2(pika);
    none = pika;

    none.display();
    pika.display();
    pika2.display();
    pika = pika;
    std::cout << "CLASS TESTS" << std::endl;
    ClapTrap sala("salamèche");
    ClapTrap bulb("Bulbizzare");
    ClapTrap cara("Carapuce");
    
    sala.attack("le mur");
    bulb.attack("le muur");
    cara.attack("le mur");
    sala.takeDamage(5);
    bulb.takeDamage(5);
    cara.takeDamage(5);
    sala.display();
    bulb.display();
    cara.display();
    sala.beRepaired(10);
    bulb.beRepaired(10);
    cara.beRepaired(10);
    sala.display();
    bulb.display();
    cara.display();

    for(int i = 0; i < 10; i++)
    {
        sala.attack("punching ball");
    }
    sala.beRepaired(100);
    for(int i = 0; i < 10; i++)
    {
        bulb.takeDamage(2);
    }
    bulb.beRepaired(100);
    cara.takeDamage(5);
    cara.beRepaired(100);
    sala.display();
    bulb.display();
    cara.display();
    cara.takeDamage(-5);
    cara.beRepaired(-5);
     for(int i = 0; i < 7; i++)
    {
        cara.attack("punching ball");
    }
    cara.beRepaired(100);
}