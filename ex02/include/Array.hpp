/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolodin <svolodin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 10:13:35 by svolodin          #+#    #+#             */
/*   Updated: 2024/06/09 17:33:57 by svolodin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ARRAY_HPP__
#define __ARRAY_HPP__

#include "Colors.hpp"
#include <iostream>
#include <string>
#include <stdexcept>

// ? Test Types
enum string_code {
  INT,
  FLOAT,
  STRING,
  EXCEPTIONS,
  EXIT,
  NONE
};

// ? Test Functions
string_code hashit (const std::string& str);
void test_IntArray( void );
void test_FloatArray( void );
void test_StringArray( void );
void test_ExceptionHandling( void );

// ? Prints
void printHeader( void );
void printError( void );

template <typename T>
class Array
{
  private:
    T *_arr;
    unsigned int _size;

  public:
    Array();
    Array( unsigned int size );
    ~Array();

    Array( const Array<T>& other );
    Array<T>& operator=( const Array<T>& other ) ;

    void print();
    T& operator[](unsigned int index);
    unsigned int size() const;

  // ! Exception
  class OutOfBounds : public std::exception {
    public:
      const char *what() const throw() {
        return (" Trying to access a number out of bounds ");
      }
  };
};

#include "Array.tpp"
#include "Array.LifeCycle.tpp"

#endif // __ARRAY_HPP__