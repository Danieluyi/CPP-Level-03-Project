/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: euyi <euyi@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 20:39:53 by euyi              #+#    #+#             */
/*   Updated: 2022/10/16 16:12:13 by euyi             ###   ########.fr       */
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
	return ( _rawBits );
}

float 	Fixed::toFloat( void ) const
{	
	return ( (float) _rawBits / ( 1 << Fixed::_bits) );
}

int 	Fixed::toInt( void ) const
{
	return ( _rawBits / ( 1 << Fixed::_bits) );
}

Fixed::~Fixed( void ) {
	// std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed( const Fixed& cp ) {
	// std::cout << "Copy constructor called" << std::endl;
	// std::cout << "Copy assignment operator called" << std::endl;
	_rawBits = cp.getRawBits();
}

Fixed::Fixed( const float cfloat ) {
	// std::cout << "Float constructor called" << std::endl;
	_rawBits = (cfloat  * (1 << Fixed::_bits)) + 0.50;
}

Fixed::Fixed( const int cint ) {
	// std::cout << "Int constructor called" << std::endl;
	_rawBits = (cint * (1 << Fixed::_bits));
}

Fixed::Fixed( void ) : _rawBits(0) {
	// std::cout << "Default constructor called" << std::endl;
}

Fixed& Fixed::min(Fixed& a, Fixed& b) {
	if ( a < b )
		return ( a );
	return ( b );
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b) {
	if ( a < b )
		return ( a );
	return ( b );
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b) {
	if ( a > b )
		return ( a );
	return ( b );
}

Fixed& Fixed::max(Fixed& a, Fixed& b) {
	if ( a > b )
		return ( a );
	return ( b );
}

Fixed&	Fixed::operator++() {
	this->setRawBits( this->getRawBits() + 1 );
	return (*this);
}

Fixed	Fixed::operator++(int) {
	Fixed	tmp(*this);
	
	this->setRawBits( this->getRawBits() + 1 );
	return (tmp);
}

Fixed&	Fixed::operator--() {
	this->setRawBits( this->getRawBits() - 1 );
	return (*this);
}

Fixed	Fixed::operator--(int) {
	Fixed	tmp(*this);
	
	this->setRawBits( this->getRawBits() - 1 );
	return (tmp);
}

Fixed	Fixed::operator+( const Fixed& obj ) {
	Fixed		tmp( this->getRawBits() + obj.getRawBits() );

	return ( tmp );
}

Fixed	Fixed::operator-( const Fixed& obj ) {
	Fixed	tmp( this->getRawBits() - obj.getRawBits() );

	return ( tmp );
}

Fixed	Fixed::operator*( const Fixed& obj ) {
	Fixed		tmp( this->toFloat() * obj.toFloat() );

	return ( tmp );
}

Fixed	Fixed::operator/( const Fixed& obj ) {
	Fixed	tmp( this->getRawBits() / obj.getRawBits() );

	return ( tmp );
}

bool	Fixed::operator>( const Fixed& obj ) const {
	if ( this->getRawBits() > obj.getRawBits() )
		return (true);
	return (false);
}

bool	Fixed::operator<( const Fixed& obj ) const {
	if ( this->getRawBits() < obj.getRawBits() )
		return (true);
	return (false);
}

bool	Fixed::operator>=( const Fixed& obj ) const {
	if ( this->getRawBits() >= obj.getRawBits() )
		return (true);
	return (false);
}

bool	Fixed::operator<=( const Fixed& obj ) const {
	if ( this->getRawBits() <= obj.getRawBits() )
		return (true);
	return (false);
}

bool	Fixed::operator==( const Fixed& obj ) const {
	if ( this->getRawBits() == obj.getRawBits() )
		return (true);
	return (false);
}

bool	Fixed::operator!=( const Fixed& obj ) const {
	if ( this->getRawBits() != obj.getRawBits() )
		return (true);
	return (false);
}

Fixed& Fixed::operator=( const Fixed& cp ) {
	// std::cout << "Copy assignment operator called" << std::endl;
	_rawBits = cp.getRawBits();
	return (*this);
}

std::ostream&	operator<<( std::ostream &out, const Fixed& obj ) {
	out << obj.toFloat();
	return ( out );
}
