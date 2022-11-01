/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: euyi <euyi@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 18:15:44 by euyi              #+#    #+#             */
/*   Updated: 2022/10/16 18:34:53 by euyi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Point.hpp"

float	Point::getX( void ) const
{
	return (_x.toFloat());
}

float	Point::getY( void ) const
{
	return (_y.toFloat());
}

float	Point::getMap( void ) const
{
	return (_map.toFloat());
}

Point&	Point::operator=( const Point& cp ) {
	return (*this);
}

Point::Point( const Point& cp ) : _x(cp._x), _y(cp._y), _map(cp._map) {
	// std::cout << "copy operator called" << std::endl;
}

Point::Point(const float x, const float y) : _x(x), _y(y), _map((y * _WIDTH) + x) {
	// _map((y * _WIDTH) + x)
	// _map((_y.toInt() * _WIDTH) + _x.toInt())
}

Point::Point( void ) : _x(0), _y(0) {
}

Point::~Point( void ) {
}
