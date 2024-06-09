/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolodin <svolodin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 15:00:47 by svolodin          #+#    #+#             */
/*   Updated: 2024/06/09 17:36:10 by svolodin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

void printError( void )
{
  std::cerr <<
    "\n\t" <<
    BOLD(BRED(" Invalid input. Try: ")) <<
    ITAL(BRED("\'INT\', \'FLOAT\', \'STRING\' or \'EXCEPTIONS\' "))
  << std::endl << std::endl;
}

void printHeader( void )
{
  std::cout <<
    "\n\t" <<
    BOLD(BGRN(" Welcome ! ")) << std::endl <<
    FGRN(" Please input a type we will use to create an Array with ") << std::endl <<
    "\t" << ITAL(FYEL("INT")) <<
    "\t" << ITAL(FRED("FLOAT")) <<
    "\t" << ITAL(FBLU("STRING")) <<
    "\t" << ITAL(FMAG("EXCEPTIONS"))
  << std::endl << std::endl;
}
