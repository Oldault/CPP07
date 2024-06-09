/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolodin <svolodin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 11:10:35 by oldault           #+#    #+#             */
/*   Updated: 2024/06/09 11:32:13 by svolodin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTIONS_HPP
#define FUNCTIONS_HPP

#include <iostream>
#include <string>
#include "Colors.hpp"

template <typename T>
void swap(T& a, T& b);

template <typename T>
const T& min(const T& x, const T& y);

template <typename T>
const T& max(const T& x, const T& y);

#include "functions.tpp"

#endif // FUNCTIONS_HPP
