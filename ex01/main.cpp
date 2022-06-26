/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeixner <konstantin.meixner@freenet.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 11:54:40 by kmeixner          #+#    #+#             */
/*   Updated: 2022/06/26 20:33:29 by kmeixner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main() {
	ScavTrap Liza("Liza");
	Liza.attack("nothing in particular");
	Liza.takeDamage(58);
	Liza.attack("nothing in particular");
	Liza.beRepaired(23);
	Liza.takeDamage(100);
	Liza.attack("nothing in particular");
	Liza.beRepaired(23);
	Liza.guardGate();
}
