/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeixner <konstantin.meixner@freenet.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 09:16:30 by kmeixner          #+#    #+#             */
/*   Updated: 2022/06/27 11:14:24 by kmeixner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	this->_Name = "Hyde";
	this->ClapTrap::_Name = this->_Name + "_clap_name";
	this->FragTrap::setHP();
	this->ScavTrap::setEP();
	this->FragTrap::setAD();
	std::cout << "This DiamondTrap " << this->_Name << " is DISGUSTING!" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "For real " << this->_Name << " - GTFO OMG!" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : _Name(name)
{
	this->ClapTrap::_Name = this->_Name + "_clap_name";
	this->FragTrap::setHP();
	this->ScavTrap::setEP();
	this->FragTrap::setAD();
	std::cout << "This DiamondTrap " << this->_Name << " is DISGUSTING!" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &src) : _Name(src._Name)
{
	this->_hp = src._hp;
	this->_ep = src._ep;
	this->_ad = src._ad;
	std::cout << "This DiamondTrap " << this->_Name << " is DISGUSTING!" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &rhs)
{
	this->_Name = rhs._Name;
	this->_hp = rhs._hp;
	this->_ep = rhs._ep;
	this->_ad = rhs._ad;
	return (*this);
}

void	DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap name is " << this->_Name;
	std::cout << " but ClapTrap name is " << this->ClapTrap::_Name << "!" << std::endl;
}
