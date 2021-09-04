//Programmer: Logan Choi
//MST Username: lcmdk
//Section: Price 101
//File: boxCylFuncts.cpp
//Purpose: This writes all the class function  definitions for the program.

#include "boxCyl.h"



void Box::setParam(const double length,const double width,const double height)
{
  //Stores the user inputs into the member data
  m_length = length;
  m_width = width;
  m_height = height;

  return;
}

double Box::calculateVolume()
{
  //Calculates the volume of a box (cube equation)
  return (m_length * m_width * m_height);
}


Cylinder::Cylinder(const double height, const double radius)
{ 
  //Stores the user inputs into the member data
  m_height = height;
  m_radius = radius;
}


double Cylinder::calculateVolume()
{
  //Calculates the volume of a cylinder using formula)
  return (M_PI * m_radius * m_radius  * m_height);
}
