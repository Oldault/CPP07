/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolodin <svolodin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 17:27:56 by svolodin          #+#    #+#             */
/*   Updated: 2024/06/09 17:35:09 by svolodin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

string_code hashit (const std::string& str)
{
  if (str == "INT") return INT;
  if (str == "FLOAT") return FLOAT;
  if (str == "STRING") return STRING;
  if (str == "EXCEPTIONS") return EXCEPTIONS;
  if (str == "EXIT") return EXIT;
  return NONE;
}

void  test_IntArray()
{
  try {
    Array<int> arr;
    Array<int> arrWithSize(5);
    Array<int> copiedArr = arrWithSize;

    for (unsigned int i = 0; i < arrWithSize.size(); ++i) {
        arrWithSize[i] = i * 10;
    }

    arrWithSize.print();

    copiedArr[2] = 999;
    std::cout <<
      FBLU(UNDL("Modified copy's third element: ")) <<
      "\t\t" << FYEL(ITAL(copiedArr[2]))
    << std::endl;
    std::cout <<
      FBLU(UNDL("Original array's third element: ")) <<
      "\t" << FYEL(ITAL(arrWithSize[2]))
    << std::endl;

    std::cout << "Accessing out of bounds: " << arrWithSize[10] << std::endl;
  }
  catch (const std::exception& e) {
    std::cout << FRED(" /!\\ Exception caught: /!\\\n") << BRED(e.what()) << std::endl;
  }
}

void test_FloatArray()
{
  try {
    Array<float> arr;
    Array<float> arrWithSize(5);
    Array<float> copiedArr = arrWithSize;

    for (unsigned int i = 0; i < arrWithSize.size(); ++i) {
        arrWithSize[i] = i * 1.1f; // Use floating point multiplication
    }

    arrWithSize.print();

    copiedArr[2] = 999.9f;
    std::cout <<
      FBLU(UNDL("Modified copy's third element: ")) <<
      "\t\t" << FYEL(ITAL(copiedArr[2]))
    << std::endl;
    std::cout <<
      FBLU(UNDL("Original array's third element: ")) <<
      "\t" << FYEL(ITAL(arrWithSize[2]))
    << std::endl;

    std::cout << "Accessing out of bounds: " << arrWithSize[10] << std::endl;
  }
  catch (const std::exception& e) {
    std::cout << FRED(" /!\\ Exception caught: /!\\\n") << BRED(e.what()) << std::endl;
  }
}

void test_StringArray()
{
  try {
    Array<std::string> arr;
    Array<std::string> arrWithSize(5);
    Array<std::string> copiedArr = arrWithSize;

    for (unsigned int i = 0; i < arrWithSize.size(); ++i) {
        arrWithSize[i] = "String " + toString(i);
    }

    arrWithSize.print();

    copiedArr[2] = "Modified";
    std::cout <<
      FBLU(UNDL("Modified copy's third element: ")) <<
      "\t\t" << FYEL(ITAL(copiedArr[2]))
    << std::endl;
    std::cout <<
      FBLU(UNDL("Original array's third element: ")) <<
      "\t" << FYEL(ITAL(arrWithSize[2]))
    << std::endl;

    std::cout << "Accessing out of bounds: " << arrWithSize[10] << std::endl;
  }
  catch (const std::exception& e) {
    std::cout << FRED(" /!\\ Exception caught: /!\\\n") << BRED(e.what()) << std::endl;
  }
}

void test_ExceptionHandling()
{
  try {
    Array<int> arrWithSize(5);

    std::cout << "Fifth element: " << arrWithSize[4] << std::endl;
    std::cout << "Accessing out of bounds: " << arrWithSize[10] << std::endl;
  }
  catch (const std::exception& e) {
    std::cout << FRED(" /!\\ Exception caught: /!\\\n") << BRED(e.what()) << std::endl;
  }
}