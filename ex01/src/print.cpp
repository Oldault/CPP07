/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolodin <svolodin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 15:00:47 by svolodin          #+#    #+#             */
/*   Updated: 2024/06/09 15:01:01 by svolodin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void printError( void )
{
  std::cerr <<
    "\n\t" <<
    BOLD(BRED(" Invalid input. Try: ")) <<
    ITAL(BRED("\'INT\', \'FLOAT\', \'STRING\' or \'ERRORS\' "))
  << std::endl << std::endl;
}

void printHeader( void )
{
  std::cout <<
    "\n\t" <<
    BOLD(BGRN(" Welcome ! ")) << std::endl <<
    FGRN(" Please input a type to pass in to ") <<
    BOLD(BGRN(" Iter(): ")) << std::endl <<
    "\t" << ITAL(FYEL("INT")) <<
    "\t" << ITAL(FRED("FLOAT")) <<
    "\t" << ITAL(FBLU("STRING")) <<
    "\t" << ITAL(FMAG("ERRORS"))
  << std::endl << std::endl;
}
