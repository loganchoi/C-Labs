//Programmer: Logan Choi
//MST Username: lcmdk
//Section Azhar 304
//File: lab13.cpp
//Purpose: This contains the main function.


#include "calculator.h"
#include "complex.h"
#include <iostream>

int main()
{
  //Declarations
  complex a(2,4), b(1,2);
  calculator <float>  c1(30.3,20.7);
  calculator <int> c2(100,30);
  calculator <complex>  c3(a,b);

  //Floating Calculations
  cout << "Floating point calculator: " << endl
       << "Numbers: 30.3, 20.7: " << endl
       << "Adding: " << c1.add() << endl  
       <<"Subtraction: " <<c1.subtract() << endl;

  //Integer Calculations
  cout << "\nInteger calculator: " << endl
       << "Numbers: 100, 30" << endl
       << "Adding: " << c2.add() << endl
       << "Subtraction: " << c2.subtract() << endl;

  //Complex Calculations
  cout << "\nComplex calculator: " << endl
       <<"Numbers: " << a << " " << b << endl
       <<"Adding: " << c3.add() << endl
       <<"Subtraction: " << c3.subtract() << endl;



  return 0;
}
