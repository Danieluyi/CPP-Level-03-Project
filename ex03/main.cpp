/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: euyi <euyi@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 16:35:07 by euyi              #+#    #+#             */
/*   Updated: 2022/10/16 19:17:50 by euyi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"

// int main( void )
// {
// 	const Fixed b(2), c(4), d(7);
// 	if ( b < c)
// 		std::cout << " operator< successful" << std::endl;
	

// 	std::cout << "b is " << b << std::endl;
// 	std::cout << "b rawbits is " << b.getRawBits() << std::endl;
// 	std::cout << "c is " << c << std::endl;
// 	std::cout << "c rawbits is " << c.getRawBits() << std::endl;
// 	std::cout << "d is " << d << std::endl;
// 	std::cout << "d rawbits is " << d.getRawBits() << std::endl;
	
// 	// std::cout << "b is " << b.toInt() << " as integer" << std::endl;
// 	// std::cout << "c is " << c.toInt() << " as integer" << std::endl;
// 	// std::cout << "d is " << d.toInt() << " as integer" << std::endl;

// 	return 0;
// }

# include "Point.hpp"

# include <iomanip>

int main(void) {
	Point	a(4.0f, 0.0f);
	Point	b(1.0f, 3.0f);
	Point	c(4.0f, 6.0f);
	Point	p(3.0f, 1.0f);

	// std::cout << "a = " << a.getMap() << " b = " << b.getMap() << " c = "
	// 	<< c.getMap() << " p = " << p.getMap() << std::endl;
	
	std::cout << std::boolalpha;
	std::cout << Point::bsp(a, b, c, p) << std::endl;
	
	return (0);
}
