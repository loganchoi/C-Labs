//Programmer: Logan Choi
//MST Username: lcmdk
//Section: Azhar 304
//File: calculator.hpp
//Purpose: This file holds the member function declarations for calculator.


template <class T>
T calculator <T> ::add()
{
  //Local Variable
  T result;
  
  //Adding
  result = m_left_val + m_right_val;


  return result;
}

template <class T>
T calculator <T>:: subtract()
{
  //Local Variable
  T result;

  //Subtracting
  result = m_left_val - m_right_val;
  
  return result;
}
