/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.tpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolodin <svolodin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 12:06:51 by svolodin          #+#    #+#             */
/*   Updated: 2024/06/09 14:59:29 by svolodin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include "Colors.hpp"

template<typename T>
void printElement(T& element)
{
  std::cout << "\t" << element;
}

template <typename T>
void  iter(T *adr, size_t len, void (*func)(T& element))
{
  if (!adr || len <= 0) {
    std::cerr << BOLD(BRED(" Problem with Iter() arguments ")) << std::endl;
    return ;
  }
  for (size_t i = 0; i < len; i++) {
    func(adr[i]);
  }

  return ;
}
