/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolodin <svolodin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 15:01:57 by svolodin          #+#    #+#             */
/*   Updated: 2024/06/09 15:02:40 by svolodin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

string_code hashit (const std::string& str)
{
  if (str == "INT") return INT;
  if (str == "FLOAT") return FLOAT;
  if (str == "STRING") return STRING;
  if (str == "ERRORS") return ERRORS;
  if (str == "EXIT") return EXIT;
  return NONE;
}

void  test_IntArray( void )
{
  int intArray[] = {42, -21, 1984};
  size_t intArrayLen = sizeof(intArray) / sizeof(intArray[0]);
  
  std::cout << std::endl;
  std::cout << BOLD(BYEL(" INT Array Initial state: ")) << KYEL << std::endl;
  iter(intArray, intArrayLen, printElement<int>);
  std::cout << RST;
  
  {
    iter(intArray, intArrayLen, add_42);
  }
  
  std::cout << std::endl;
  std::cout << BOLD(BYEL(" INT Array state after Iter(): ")) << KYEL << std::endl;
  iter(intArray, intArrayLen, printElement<int>);
  std::cout << RST << "\n\n";
}

void  test_FloatArray( void )
{
  float floatArray[2] = {2.1f, 0.0f};
  size_t floatArrayLen = sizeof(floatArray) / sizeof(floatArray[0]);

  std::cout << std::endl;
  std::cout << BOLD(BRED(" FLOAT Array Initial state: ")) << KRED << std::endl;
  iter(floatArray, floatArrayLen, printElement<float>);
  std::cout << RST;
  
  {
    iter(floatArray, floatArrayLen, subtract_42);
  }
  
  std::cout << std::endl;
  std::cout << BOLD(BRED(" FLOAT Array state after Iter(): ")) << KRED << std::endl;
  iter(floatArray, floatArrayLen, printElement<float>);
  std::cout << RST << "\n\n";
}

void  test_stringArray( void )
{
  std::string rot13nd[4] = {"V", "ernyyl", "yvxr", "fneqvarf"};
  size_t rot13ndLen = sizeof(rot13nd) / sizeof(rot13nd[0]);

  std::cout << std::endl;
  std::cout << BOLD(BBLU(" STRING Array Initial state: ")) << KBLU << std::endl;
  iter(rot13nd, rot13ndLen, printElement<std::string>);
  std::cout << RST;
  
  {
    iter(rot13nd, rot13ndLen, decrypt);
  }
  
  std::cout << std::endl;
  std::cout << BOLD(BBLU(" STRING Array state after Iter(): ")) << KBLU << std::endl;
  iter(rot13nd, rot13ndLen, printElement<std::string>); 
  std::cout << RST << "\n\n";
}

void  test_error( void )
{
  std::string err[42] = {""};
  {
    iter(err, 1, decrypt);
  }
}
