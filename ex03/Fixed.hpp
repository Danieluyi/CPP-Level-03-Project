/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: euyi <euyi@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 16:21:07 by euyi              #+#    #+#             */
/*   Updated: 2022/10/15 16:49:44 by euyi             ###   ########.fr       */
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

	static Fixed&			min(Fixed& a, Fixed& b);
	static Fixed&			max(Fixed& a, Fixed& b);
	static const Fixed&		min(const Fixed& a, const Fixed& b);
	static const Fixed&		max(const Fixed& a, const Fixed& b);

	Fixed( void );
	Fixed( const int cint );
	Fixed( const float cfloat );
	Fixed( const Fixed& cp );
	~Fixed( void );

	Fixed&	operator=( const Fixed& cp );
	bool	operator>( const Fixed& obj ) const;
	bool	operator<( const Fixed& obj ) const;
	bool	operator>=( const Fixed& obj ) const;
	bool	operator<=( const Fixed& obj ) const;
	bool	operator==( const Fixed& obj ) const;
	bool	operator!=( const Fixed& obj ) const;
	Fixed	operator+( const Fixed& obj );
	Fixed	operator-( const Fixed& obj );
	Fixed	operator*( const Fixed& obj );
	Fixed	operator/( const Fixed& obj );
	Fixed&	operator++();
	Fixed	operator++(int);
	Fixed&	operator--();
	Fixed	operator--(int);
};

	std::ostream&	operator<<( std::ostream &out, const Fixed& obj );

#endif


