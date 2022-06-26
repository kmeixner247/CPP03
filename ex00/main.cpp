/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeixner <konstantin.meixner@freenet.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 11:54:40 by kmeixner          #+#    #+#             */
/*   Updated: 2022/06/26 20:30:39 by kmeixner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	{
		ClapTrap bob("Bob");
		bob.attack("Peter");
		bob.takeDamage(9);
		bob.beRepaired(4);
		bob.takeDamage(20);
		bob.attack("ur mom");
		bob.beRepaired(1234);
	}
	{
		ClapTrap jimmy("Jimmy");
		jimmy.attack("something");
		jimmy.attack("something");
		jimmy.attack("something");
		jimmy.attack("something");
		jimmy.attack("something");
		jimmy.attack("something");
		jimmy.attack("something");
		jimmy.attack("something");
		jimmy.attack("something");
		jimmy.attack("something");
		jimmy.attack("something");
		jimmy.beRepaired(2);
		jimmy.takeDamage(2);
		jimmy.takeDamage(12);
		jimmy.attack("something");
		jimmy.beRepaired(2);
	}
}
