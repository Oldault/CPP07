
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolodin <svolodin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 10:13:03 by svolodin          #+#    #+#             */
/*   Updated: 2024/05/31 10:13:04 by svolodin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ITER_HPP__
#define __ITER_HPP__

#include <iostream>
#include <string>
#include <cstddef>
#include <cctype>

// ? Third Parameter functions
void add_42(int& n);
void subtract_42(float& n);
void decrypt(std::string& text);

// ? print
template<typename T>
void printElement(T& element);

// ! Iter() itself
template <typename T>
void  iter(T *adr, size_t len, void (*func)(T& element));

#include "iter.tpp"

#endif // __ITER_HPP__