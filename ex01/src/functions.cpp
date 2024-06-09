/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolodin <svolodin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 12:08:55 by svolodin          #+#    #+#             */
/*   Updated: 2024/06/09 14:57:08 by svolodin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void add_42(int& n)
{
  n += 42;
}

void subtract_42(float& n)
{
  n -= 42.0f;
}

void decrypt(std::string& text)
{
  if (text.empty()) {
    std::cerr << BOLD(BRED(" Problem with arguments ")) << std::endl;
    return ;
  }
  for (size_t i = 0; i < text.length(); ++i)
  {
    char& c = text[i];
    if (isalpha(c))
    {
      char base = islower(c) ? 'a' : 'A';
      c = (c - base - 13 + 26) % 26 + base;
    }
  }
}

