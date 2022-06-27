/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeixner <konstantin.meixner@freenet.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 13:13:56 by kmeixner          #+#    #+#             */
/*   Updated: 2022/06/27 10:51:58 by kmeixner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	this->setHP();
	this->setEP();
	this->setAD();
	std::cout << "\x1B[33m";
	std::cout << "The FragTrap ";
	std::cout << this->_Name << " falls from the sky, looking for trouble!" << std::endl;
	std::cout << "\033[0m";
}


FragTrap::FragTrap(std::string name)
{
	this->_Name = name;
	this->setHP();
	this->setEP();
	this->setAD();
	std::cout << "\x1B[33m";
	std::cout << "The FragTrap ";
	std::cout << this->_Name << " falls from the sky, looking for trouble!" << std::endl;
	std::cout << "\033[0m";
}

FragTrap::FragTrap(FragTrap const &src)
{
	this->_Name = src._Name;
	this->_hp = src._hp;
	this->_ep = src._ep;
	this->_ad = src._ad;
	std::cout << "\x1B[33m";
	std::cout << "The FragTrap ";
	std::cout << this->_Name << " falls from the sky, looking for trouble!" << std::endl;
	std::cout << "\033[0m";
}

FragTrap::~FragTrap()
{
	std::cout << "\x1B[33m";
	std::cout << "FragTrap " << this->_Name << " realizes that it's too cool for this room and flies away." << std::endl;
	std::cout << "\033[0m";
}

FragTrap &FragTrap::operator=(FragTrap const &rhs)
{
	this->_Name = rhs._Name;
	this->_hp = rhs._hp;
	this->_ep = rhs._ep;
	this->_ad = rhs._ad;
	return (*this);
}

void FragTrap::highFivesGuys()
{
	std::cout << "\x1B[33m";
	std::cout << "FragTrap " << this->_Name << " lifts up his right hand to request a high five. C'mon, don't leave it hanging!" << std::endl;
	std::cout << "\033[0m";
}

void	FragTrap::setHP()
{
	this->_hp = 100;
}

void	FragTrap::setEP()
{
	this->_ep = 100;
}

void	FragTrap::setAD()
{
	this->_ad = 30;
}