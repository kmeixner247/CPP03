/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeixner <konstantin.meixner@freenet.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 19:52:06 by kmeixner          #+#    #+#             */
/*   Updated: 2022/06/27 11:58:18 by kmeixner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include "ClapTrap.hpp"
#include <iostream>
class FragTrap : virtual public ClapTrap {
public:
	FragTrap();
	~FragTrap();
	FragTrap(std::string name);
	FragTrap(FragTrap const &src);
	FragTrap &operator=(FragTrap const &rhs);
	void	attack(const std::string &target);
	void	highFivesGuys();
	void	setHP();
	void	setEP();
	void	setAD();
};
#endif