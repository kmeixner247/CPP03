/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeixner <konstantin.meixner@freenet.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 13:13:56 by kmeixner          #+#    #+#             */
/*   Updated: 2022/06/27 09:23:33 by kmeixner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	this->_Name = "Serena";
	this->_hp = 100;
	this->_ep = 50;
	this->_ad = 20;
	std::cout << "\x1B[32m";
	std::cout << "The incredible ScavTrap ";
	std::cout << this->_Name << " enters the arena!" << std::endl;
	std::cout << "\033[0m";
}

ScavTrap::ScavTrap(std::string name)
{
	this->_Name = name;
	this->_hp = 100;
	this->_ep = 50;
	this->_ad = 20;
	std::cout << "\x1B[32m";
	std::cout << "The incredible ScavTrap ";
	std::cout << this->_Name << " enters the arena!" << std::endl;
	std::cout << "\033[0m";
}

ScavTrap::ScavTrap(ScavTrap const &src)
{
	this->_Name = src._Name;
	this->_hp = src._hp;
	this->_ep = src._ep;
	this->_ad = src._ad;
	
	std::cout << "\x1B[32m";
	std::cout << "The incredible ScavTrap ";
	std::cout << this->_Name << " enters the arena!" << std::endl;
	std::cout << "\033[0m";
}

ScavTrap::~ScavTrap()
{
	std::cout << "\x1B[32m";
	std::cout << "ScavTrap " << this->_Name << " says bye bye." << std::endl;
	std::cout << "\033[0m";
}

ScavTrap &ScavTrap::operator=(ScavTrap const &rhs)
{
	this->_Name = rhs._Name;
	this->_hp = rhs._hp;
	this->_ep = rhs._ep;
	this->_ad = rhs._ad;
	return (*this);
}

void ScavTrap::attack(const std::string &target) {
	std::cout << "\x1B[32m";
	if (this->_hp == 0)
		std::cout << "ScavTrap " << this->_Name << " is done for and can't even think of attacking " << target << "." << std::endl;
	else if (this->_ep == 0)
		std::cout << "ScavTrap " << this->_Name << " is out of breath and can't attack!" << std::endl;
	else {
		std::cout << "ScavTrap " << this->_Name << " slices up " << target;
		std::cout << ", causing " << this->_ad << " points of damage!" << std::endl;
		this->_ep--;
	}
	std::cout << "\033[0m";
}

void	ScavTrap::guardGate()
{
	std::cout << "\x1B[32m";
	std::cout << "ScavTrap " << this->_Name << " has entered Gate Keeper mode." << std::endl;
	std::cout << "\033[0m";
}