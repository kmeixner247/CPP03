/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeixner <konstantin.meixner@freenet.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 09:11:12 by kmeixner          #+#    #+#             */
/*   Updated: 2022/06/27 11:36:53 by kmeixner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap billy("Billy");
	billy.attack("whatever");
	billy.takeDamage(5);
	billy.beRepaired(3);
	billy.guardGate();
	billy.highFivesGuys();
	billy.whoAmI();
}
