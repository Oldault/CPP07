/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolodin <svolodin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 10:11:12 by svolodin          #+#    #+#             */
/*   Updated: 2024/06/09 12:46:24 by svolodin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main (void)
{
  {
    int intArray[] = {42, -21, 1984};
    size_t intArrayLen = sizeof(intArray) / sizeof(intArray[0]);
    
    iter(intArray, intArrayLen, printElement<int>);
    iter(intArray, intArrayLen, add_42);
    iter(intArray, intArrayLen, printElement<int>);
  }
  
  std::cout << std::endl;

  {
    float floatArray[2] = {2.1f, 0.0f};
    size_t floatArrayLen = sizeof(floatArray) / sizeof(floatArray[0]);

    iter(floatArray, floatArrayLen, printElement<float>);
    iter(floatArray, floatArrayLen, subtract_42);
    iter(floatArray, floatArrayLen, printElement<float>);    
  }

  std::cout << std::endl;

  {
    std::string rot13nd[4] = {"V", "ernyyl", "yvxr", "fneqvarf"};
    size_t rot13ndLen = sizeof(rot13nd) / sizeof(rot13nd[0]);
    
    iter(rot13nd, rot13ndLen, printElement<std::string>);
    iter(rot13nd, rot13ndLen, decrypt);
    iter(rot13nd, rot13ndLen, printElement<std::string>);  
  }
  
  return 0;
}
