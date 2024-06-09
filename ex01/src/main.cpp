/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolodin <svolodin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 10:11:12 by svolodin          #+#    #+#             */
/*   Updated: 2024/06/09 17:33:38 by svolodin         ###   ########.fr       */
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
      case STRING: test_StringArray(); break;
      case EXCEPTIONS: test_Exception(); break;
      case EXIT: return 0;
      default: printError();
    }
  }

  return 0;
}
