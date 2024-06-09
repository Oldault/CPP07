/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolodin <svolodin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 10:11:12 by svolodin          #+#    #+#             */
/*   Updated: 2024/06/09 11:36:28 by svolodin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.hpp"

void  swap_tests( void );
void  min_tests( void );
void  max_tests( void );

/**
 * * Mandatory test
*/
// int main( void ) {
//   int a = 2;
//   int b = 3;
//   ::swap( a, b );
//   std::cout << "a = " << a << ", b = " << b << std::endl;
//   std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
//   std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
//   std::string c = "chaine1";
//   std::string d = "chaine2";
//   ::swap(c, d);
//   std::cout << "c = " << c << ", d = " << d << std::endl;
//   std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
//   std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
//   return 0;
// }

int main(void)
{
  swap_tests();
  min_tests();
  max_tests();

  return 0;
}

void  swap_tests( void )
{
  std::cout << "\n\t" << BMAG(BOLD(" Swap Tests: ")) << std::endl;
  
  int x = 10, y = 20;
  swap(x, y);
  std::cout << "Swapped integers:\t x = " << x << ", y = " << y << std::endl;

  double a = 1.1, b = 2.2;
  swap(a, b);
  std::cout << "Swapped doubles:\t a = " << a << ", b = " << b << std::endl;

  char c1 = 'A', c2 = 'B';
  swap(c1, c2);
  std::cout << "Swapped chars:\t\t c1 = " << c1 << ", c2 = " << c2 << std::endl;
  return ;
}

void  min_tests( void )
{
  std::cout << "\n\t" << BMAG(BOLD(" Min Tests: ")) << std::endl;
  std::cout << "Min of 10 and 20: " << "\t\t" << min(10, 20) << std::endl;
  std::cout << "Min of -10.5 and -20.5: " << "\t" << min(-10.5, -20.5) << std::endl;
  std::cout << "Min of 0 and -1: " << "\t\t" << min(0, -1) << std::endl;
  std::cout << "Min of 'a' and 'b': " << "\t\t" << min('a', 'b') << std::endl;

  return ;
}

void  max_tests( void )
{
  std::cout << "\n\t" << BMAG(BOLD(" Max Tests: ")) << std::endl;
  std::cout << "Max of 10 and 20: " << "\t\t" << max(10, 20) << std::endl;
  std::cout << "Max of -10.5 and -20.5: " << "\t" << max(-10.5, -20.5) << std::endl;
  std::cout << "Max of 0 and -1: " << "\t\t" << max(0, -1) << std::endl;
  std::cout << "Max of 'a' and 'b': " << "\t\t" << max('a', 'b') << std::endl << std::endl;
  
  return ;
}
