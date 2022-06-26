/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeixner <konstantin.meixner@freenet.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 11:54:40 by kmeixner          #+#    #+#             */
/*   Updated: 2022/06/26 20:42:47 by kmeixner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main() {
	ScavTrap liza("Liza");
	liza.attack("nothing in particular");
	liza.takeDamage(58);
	liza.attack("nothing in particular");
	liza.beRepaired(23);
	liza.takeDamage(100);
	liza.attack("nothing in particular");
	liza.beRepaired(23);
	liza.guardGate();
}
