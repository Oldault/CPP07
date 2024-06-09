/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolodin <svolodin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 10:11:12 by svolodin          #+#    #+#             */
/*   Updated: 2024/06/09 15:02:35 by svolodin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main (void)
{
  std::string input;

  printHeader();
  while (true)
  {
    if (std::cin.eof())
      break ;
    std::cout << FYEL(" > ");
    std::getline(std::cin, input);
    
    switch(hashit(input))
    {
      case INT: test_IntArray(); break;
      case FLOAT: test_FloatArray(); break;
      case STRING: test_stringArray(); break;
      case ERRORS: test_error(); break;
      case EXIT: return 0;
      default: printError();
    }
  }

  return 0;
}
