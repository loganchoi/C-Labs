//Programmer: Logan Choi
//MST Username: lcmdk
//Section: Price 101
//File: boxCyl.h 
//Purpose: This file contains the classes in which the rest of the
//         program will utilize.


#include <iostream>
#ifndef BOXCYL_H
#define BOXCYL_H
using namespace std;

//The setParam() will get all the user inputs and store them into the object
//that is the member of box.
//Pre: All the parameters are positive numbers.
//Post: All the user inputs are stored into the object that is the member of box.

//The calculateVolume() will just calculate and return the volume of a box.
//Pre: None
//Post: The volume of a box is calculated and returned.

class Box
{
  public:
    void setParam(const double length,const double width, const double height);
    double calculateVolume();
  
  private:
    double m_length;
    double m_width;
    double m_height;
};

//The Cylinder() will get all the user inputs and store them into an object
//that is a member of cylinder.
//Pre: All the parameters are positive numbers.
//Post: All the user inputs are stored in the object that is the member of 
//cylinder.

//The calculateVolume() will just calculate and return the volume ofa cylinder.
//Pre: None
//Post: The volume of a cylinder is calculated and returned.

class Cylinder
{
  public:
    Cylinder(const double height, const double radius);
    double calculateVolume();

  private:
    const double M_PI = 3.1416;
    double m_radius;
    double m_height;
};


#endif
