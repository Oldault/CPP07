/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolodin <svolodin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 10:11:12 by svolodin          #+#    #+#             */
/*   Updated: 2024/06/09 16:26:15 by svolodin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main (void)
{
  Array<int> arr;
  Array<int> arrWithSize(5);

  arrWithSize.print();
  std::cout << arrWithSize[2] << std::endl;

  return 0;
}
