/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeixner <konstantin.meixner@freenet.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 11:11:20 by kmeixner          #+#    #+#             */
/*   Updated: 2022/06/27 09:22:49 by kmeixner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() :
_Name("CL4P-TP"),
_hp(10),
_ep(10),
_ad(0)
{
	std::cout << "\x1B[31m";
	std::cout << "Rejoice, everyone! ClapTrap " << this->_Name << " is here!" << std::endl;
	std::cout << "\033[0m";
}

ClapTrap::ClapTrap(std::string name) :
_Name(name),
_hp(10),
_ep(10),
_ad(0)
{
	std::cout << "\x1B[31m";
	std::cout << "Rejoice, everyone! ClapTrap " << this->_Name << " is here!" << std::endl;
	std::cout << "\033[0m";
}

ClapTrap::ClapTrap(ClapTrap const &src) :
_Name(src._Name),
_hp(src._hp),
_ep(src._ep),
_ad(src._ad)
{
	std::cout << "\x1B[31m";
	std::cout << "Rejoice, everyone! ClapTrap " << this->_Name << " is here!" << std::endl;
	std::cout << "\033[0m";
}

ClapTrap &ClapTrap::operator=(ClapTrap const &rhs)
{
	this->_Name = rhs._Name;
	this->_hp = rhs._hp;
	this->_ep = rhs._ep;
	this->_ad = rhs._ad;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "\x1B[31m";
	std::cout << "ClapTrap " << this->_Name << " goes into sleep mode." << std::endl;
	std::cout << "\033[0m";
}

void ClapTrap::attack(const std::string &target)
{
	std::cout << "\x1B[31m";
	if (this->_hp == 0)
		std::cout << "ClapTrap " << this->_Name << " is lying dead on the floor, unable to attack " << target << "." << std::endl;
	else if (this->_ep == 0)
		std::cout << "ClapTrap " << this->_Name << " is completely out of energy and can't attack!" << std::endl;
	else
	{
		std::cout << "ClapTrap " << this->_Name << " attacks " << target;
		std::cout << ", causing " << this->_ad << " points of damage!" << std::endl;
		this->_ep--;
	}
	std::cout << "\033[0m";
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "\x1B[31m";
	if (this->_hp > amount)
	{
		std::cout << "ClapTrap " << this->_Name << " takes a hit for " << amount << " points of damage!" << std::endl;
		this->_hp -= amount;
	}
	else
	{
		std::cout << "ClapTrap " << this->_Name << " takes a hit for " << this->_hp << " points of damage and dies!" << std::endl;
		this->_hp = 0;
	}
	std::cout << "\033[0m";
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "\x1B[31m";
	if (this->_hp == 0)
		std::cout << "ClapTrap " << this->_Name << " is dead. It's too late to repair itself." << std::endl;
	else if (this->_ep == 0)
		std::cout << "ClapTrap " << this->_Name << " is completely out of energy and can't repair itself!" << std::endl;
	else
	{
		std::cout << "ClapTrap " << this->_Name << " repairs itself for " << amount << " hitpoints." << std::endl;
		this->_hp += amount;
		this->_ep--;
	}
	std::cout << "\033[0m";
}
