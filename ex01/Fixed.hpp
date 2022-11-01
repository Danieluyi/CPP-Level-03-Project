/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: euyi <euyi@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 16:21:07 by euyi              #+#    #+#             */
/*   Updated: 2022/10/14 18:32:30 by euyi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __FIXED_H__
# define __FIXED_H__

# include <iostream>
# include <iomanip>

class	Fixed {
private:
	int					_rawBits;
	static const int	_bits;

public:
	int		getRawBits( void ) const;
	void 	setRawBits( int const raw );
	float 	toFloat( void ) const;
	int 	toInt( void ) const;

	Fixed( void );
	Fixed( const int cint );
	Fixed( const float cfloat );
	Fixed( const Fixed& cp );
	~Fixed( void );

	Fixed&	operator=( const Fixed& cp );
};

	std::ostream&	operator<<( std::ostream &out, const Fixed& obj );

#endif
