/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeixner <konstantin.meixner@freenet.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 11:54:40 by kmeixner          #+#    #+#             */
/*   Updated: 2022/06/26 20:42:08 by kmeixner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	FragTrap richard("Richard");
	richard.attack("some boring person");
	richard.takeDamage(58);
	richard.attack("some boring person");
	richard.beRepaired(23);
	richard.takeDamage(100);
	richard.attack("some boring person");
	richard.beRepaired(23);
	richard.highFivesGuys();
}
