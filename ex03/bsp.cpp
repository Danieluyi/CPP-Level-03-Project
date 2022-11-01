/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: euyi <euyi@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 16:23:30 by euyi              #+#    #+#             */
/*   Updated: 2022/10/16 19:56:27 by euyi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Point.hpp"

float	getNumByPos( float one, float two, float thr, int pos);
float	dotMapper(float srcMap, float destMap);

bool Point::bsp( Point const A, Point const B, Point const C, Point const P)
{
	// Get sum(X, Y) graph coordinates of each vertex and sort them
	// into a, b, c in ascending order.
	float	a(getNumByPos(A.getMap(), B.getMap(), C.getMap(), 0)); // 4
	float 	b(getNumByPos(A.getMap(), B.getMap(), C.getMap(), 1)); // 31
	float 	c(getNumByPos(A.getMap(), B.getMap(), C.getMap(), 2)); // 64	
	
	// Get the number that multiples along the shortest
	// straight line between each vertex
	float 	aMapB(dotMapper(a, b)); // 9
	float 	aMapC(dotMapper(a, c)); // 10
	float 	bMapC(dotMapper(b, c)); // 11
	
	// Preparation for the loop
	float	aDotB = a + aMapB; // 13
	float	aDotC = a + aMapC; // 14
	float	bDotC = b + bMapC; // 42

	// Loop drawing a line from Point A to Point C (Theoretically the longest line)
	// same time drawing another Line from Point A to B
	while ( aDotB <= b)
	{
		if ( (P.getMap() < aDotB && P.getMap() > aDotC)
			|| (P.getMap() > aDotB && P.getMap() < aDotC) )
			return (true);
		aDotB += aMapB; // 40
		aDotC += aMapC; // 44
	}

	// Line drawn from Point A to Point C continues
	// Now same time with B to C
	while ( aDotC <= c )
	{
		if ( (P.getMap() < aDotC && P.getMap() > bDotC)
			|| (P.getMap() > aDotC && P.getMap() < bDotC) )
			return (true);
		aDotC += aMapC; // 54
		bDotC += bMapC; // 53
	}
	
	return (false);
}

// ************************************************************
// Mapping the number interval sequence along shortest direct *
// connection line between srcMap position and destMap		  *
// position													  *
// ************************************************************											
float	dotMapper(float srcMap, float destMap)
{
	int		srcYAxis = (srcMap / _WIDTH);
	int		destYAxis = (destMap / _WIDTH);
	int		yAxisDiff = (destYAxis - srcYAxis);
	float	dotPath = (float) (destMap - srcMap) / yAxisDiff;

	return (dotPath);
}

// **********************************************************
// Takes three integers one, two and thr. Then				*
// sorts them from least to highest order. Lowest == pos 0,	*
// middle == pos 1, highest == pos 2. 						*
// Return value is the number in pos (param 4)				*
// **********************************************************
float	getNumByPos( float one, float two, float thr, int pos)
{
	float arr[4] = {one, two, thr, 0};
	float tmp;
	int	i = 0;
	
	while ( i < 2 )
	{
		if ( arr[i] > arr[i + 1])
		{
			tmp = arr[i + 1];
			arr[i + 1] = arr[i];
			arr[i] = tmp;
			i = 0;
		}
		else
			i++;
	}
	return ( arr[pos] );
}
