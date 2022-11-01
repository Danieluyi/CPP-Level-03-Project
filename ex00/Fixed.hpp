/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: euyi <euyi@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 16:21:07 by euyi              #+#    #+#             */
/*   Updated: 2022/10/13 17:28:13 by euyi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __FIXED_H__
# define __FIXED_H__

#include <iostream>

class	Fixed {
private:
	int					_rawBits;
	static const int	_bits;

public:
	int		getRawBits( void ) const;
	void 	setRawBits( int const raw );

	Fixed( void );
	Fixed( const Fixed& cp );
	Fixed& operator=( const Fixed& cp );
	~Fixed( void );
};

#endif
