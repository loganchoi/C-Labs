//Programmer: Logan Choi
//MST Username: lcmdk
//Section: Azhar 304
//File: complex.cpp
//Purpose: This holds the member function declarations of complex.


#include "complex.h"

complex complex::operator + (complex const& number)
{
  //Local Variable
  complex result;
  
  //Add the two corresponding parts.
  result.m_real = m_real + number.m_real;
  result.m_imaginary = m_imaginary + number.m_imaginary; 
  
  return result;
}

complex complex:: operator - (complex const& number)
{
  //Local Variable
  complex result;

  //Subtract the two corresponding parts
  result.m_real = m_real - number.m_real;
  result.m_imaginary = m_imaginary - number.m_imaginary;

  return result;
}

ostream& operator << (ostream& out, const complex& c)
{
  //Set up the cout for a complex number
  out << "(" << c.m_real << ", " << c.m_imaginary
      << "*i)";
  return out;
}
