/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolodin <svolodin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 15:22:40 by svolodin          #+#    #+#             */
/*   Updated: 2024/06/09 17:14:34 by svolodin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template<typename T>
void Array<T>::print()
{
  std::cout << UNDL(FMAG("Array values:")) << std::endl;
  for (unsigned int i = 0; i < _size; i++) {
    if (!(i % 5) && i > 1) std::cout << std::endl;
    std::cout << "\t" << ITAL(FYEL(_arr[i]));
  }
  std::cout << std::endl << std::endl;
}

template<typename T>
T& Array<T>::operator[](unsigned int index)
{
  if (index >= _size)
    throw Array::OutOfBounds();
  return _arr[index];
}

template<typename T>
unsigned int Array<T>::size() const
{
  return _size;
}

