/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeixner <konstantin.meixner@freenet.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 11:08:44 by kmeixner          #+#    #+#             */
/*   Updated: 2022/06/26 20:30:33 by kmeixner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>
class ClapTrap {
public:
			ClapTrap(void);
			ClapTrap(std::string name);
			ClapTrap(ClapTrap const &src);
			ClapTrap &operator=(ClapTrap const &rhs);
			~ClapTrap(void);	
	void	attack(const std::string &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
protected:
	std::string		_Name;
	unsigned int	_hp;
	unsigned int	_ep;
	unsigned int	_ad;
};
#endif
