/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.LifeCycle.tpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolodin <svolodin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 17:11:40 by svolodin          #+#    #+#             */
/*   Updated: 2024/06/09 17:49:36 by svolodin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template<typename T>
Array<T>::Array() :
  _arr(0),
  _size(0)
{}

template<typename T>
Array<T>::Array(unsigned int size) : _size(size)
{
  _arr = new T[_size]();
}

template<typename T>
Array<T>::~Array()
{
  delete[] _arr;
}

template<typename T>
Array<T>::Array(const Array<T>& other) :
  _arr(new T[other._size]()),
  _size(other._size)
{
  for (unsigned int i = 0; i < _size; i++) {
    _arr[i] = other._arr[i];
  }
}

template<typename T>
Array<T>& Array<T>::operator=(const Array<T>& other)
{
  if (this != &other)
  {
    delete[] _arr;
    _arr = new T[other._size]();
    _size = other._size;
    for (unsigned int i = 0; i < _size; i++) {
      _arr[i] = other._arr[i];
    }
  }

  return *this;
}