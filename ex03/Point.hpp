/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: euyi <euyi@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 18:12:46 by euyi              #+#    #+#             */
/*   Updated: 2022/10/16 18:30:34 by euyi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __POINT_H__
# define __POINT_H__

#ifndef _WIDTH
# define _WIDTH 10
#endif

# include "Fixed.hpp"

class	Point {
private:
	const Fixed	_x;
	const Fixed	_y;
	Fixed		_map;

public:
	static bool bsp( Point const A, Point const B, Point const C, Point const P);
	
	float	getX( void ) const;
	float	getY( void ) const;
	float	getMap( void ) const;
	
	Point( void );
	Point(const float x, const float y);
	Point( const Point& cp );
	~Point( void );
	
	Point&	operator=( const Point& cp );

};

#endif
