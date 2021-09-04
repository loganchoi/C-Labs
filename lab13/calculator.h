//Programmer: Logan Choi
//MST Username: lcmdk
//Section: Azhar 304
//File: calculator.h
//Purpose: Holds the calculator class.

#ifndef CALCULATOR_H
#define CALCULATOR_H
#include <iostream>
using namespace std;

//The calculator() will just set up the member variables.
//Pre: The parameters are number types.
//Post: The member variables are set up and stored.

//The add() will just add two member variables.
//Pre: None
//Post: The resulting add calculation is returned

//The subtract() will just subtract two member variables.
//Pre: None
//Post: The resulting subtract calculation is returned.

template <class T>
class calculator
{
  public:
    calculator(T left, T right): m_left_val(left), m_right_val(right){}
    T add();
    T subtract();
  private:
    T m_left_val;
    T m_right_val;
};

#include "calculator.hpp"
#endif
