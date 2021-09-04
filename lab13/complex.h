//Programmer: Logan Choi
//MST Username: lcmdk
//Section: Azhar 304
//File: complex.h
//Purpose: This holds the complex class.


#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>
using namespace std;

//The complex() just intializes the member variables
//Pre: None
//Post: The member variables are set and stored.

//The operator + () will add the two complex numbers
//Pre: The parameter has valid information.
//Post: The resulting add calculation is returned.

//The operator - () will subtract the two complex numbers
//Pre: The paramater has valid information.
//Post: The resulting subtract calculation is returned.

//The operator << () will just print the complex number.
//Pre: The paramter has valid information.
//Post: The complex number is printed out.

class complex
{
  public:
    complex(const double real = 0, const double imaginary = 0):
           m_real(real),m_imaginary(imaginary){}
    complex operator + (complex const & number);
    complex operator - (complex const & number);
    friend ostream& operator << (ostream& out,const complex & c);
  private:
    double m_real;
    double m_imaginary;
};



#endif
