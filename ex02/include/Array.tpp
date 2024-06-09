/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolodin <svolodin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 15:22:40 by svolodin          #+#    #+#             */
/*   Updated: 2024/06/09 16:27:17 by svolodin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template<typename T>
Array<T>::Array() : _size(0)
{
  _arr = new T;
}

template<typename T>
Array<T>::Array(unsigned int size) : _size(size)
{
  _arr = new T[_size];
}

template<typename T>
Array<T>::~Array()
{
  delete[] _arr;
}

template<typename T>
void Array<T>::print()
{
  std::cout << UNDL(FMAG(" Array values: ")) << std::endl;
  for (unsigned int i = 0; i < _size; i++) {
    std::cout << "\t" << ITAL(_arr[i]);
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

