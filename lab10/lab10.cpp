//Programmer: Logan Choi
//MST Username: lcmdk
//Section: Price 101
//File: lab10.cpp
//Purpose: This file contains the main function that will calal
//         the member functions to get a cylinder and box volume.


#include "boxCyl.h"

int main()
{
  //Variables
  Box b;
  double length;
  double height_cyl;
  double height_box;
  double width;
  double radius;
  double b_vol;
  double c_vol;
  
  //Get the box inputs from user
  cout << "What is the box's length? " << endl;
  cin >> length;
  cout << "What is the box's width? " << endl;
  cin >> width;
  cout << "What is the box's height? " << endl;
  cin >> height_box;
  
  //This fills in the data of b(box), and then calculates
  // volume and stores that value into b_vol.
  b.setParam(length, width, height_box);
  b_vol = b.calculateVolume();
  
  //Get the cylinder inputs from user
  cout << "What is the cylinder's height? " << endl;
  cin >> height_cyl;
  cout << "What is the cylinder's radius? " << endl;
  cin >> radius;

  //This initiates a new variable c and automatically
  //gives it the data of the cylinder. (constructor)
  //The volume is then calculated and stored into c_vol.
  Cylinder c(height_cyl,radius);
  c_vol = c.calculateVolume();

  //Output Results
  cout << "\nBox length: " << length << endl
       << "Box width: " << width << endl
       << "Box height: " << height_box << endl
       << "Cylinder height: " << height_cyl << endl
       << "Cylinder radius: " << radius << endl
       << "Box Volume: " << b_vol << endl
       << "Cylinder Volume: " << c_vol << endl;

  return 0;
}
