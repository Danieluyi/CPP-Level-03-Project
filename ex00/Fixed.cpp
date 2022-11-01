/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: euyi <euyi@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 20:39:53 by euyi              #+#    #+#             */
/*   Updated: 2022/10/13 17:28:05 by euyi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"

	const int	Fixed::_bits = 8;

void 	Fixed::setRawBits( int const raw )
{
	_rawBits = raw;
}

int		Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return ( _rawBits );
}

Fixed::~Fixed( void ) {
	std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=( const Fixed& cp ) {
	std::cout << "Copy assignment operator called" << std::endl;
	_rawBits = cp.getRawBits();
	return (*this);
}

Fixed::Fixed( const Fixed& cp ) {
	std::cout << "Copy constructor called" << std::endl;
	_rawBits = cp.getRawBits();
}

Fixed::Fixed( void ) : _rawBits(0) {
	std::cout << "Default constructor called" << std::endl;
}
