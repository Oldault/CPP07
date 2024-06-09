/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.tpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oldault <oldault@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 11:11:06 by oldault           #+#    #+#             */
/*   Updated: 2024/06/09 11:19:32 by oldault          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.hpp"

template <typename T>
void  swap(T& a, T& b)
{
  T temp = a;
  a = b;
  b = temp;
  
  return ;
}

template <typename T>
const T& min(const T& x, const T& y)
{
  return ((x < y) ? x : y);
}

template  <typename T>
const T& max(const T& x, const T& y)
{
  return ((x > y) ? x : y);
}
