//Programmer: Logan Choi
//MST Username: lcmdk
//Section: Azhar 304
//File: lab15.cpp
//Purpose: This is the main file for the program.

#include "array.h"

int main()
{ 
  //Declarations:
  myArray arr1(5),arr2;
  
  //Make all the info equal to 13, and output
  arr1 = 13;
  output(arr1);
  
  //Make arr2 the same as arr1, and output
  arr2 = arr1;
  output(arr2);
  
  //Declare new array with original array, and output
  myArray arr3(arr1);
  output(arr3);

  return 0;
}
