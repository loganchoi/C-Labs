//Programmer: Logan Choi
//MST Username: lcmdk
//Section: Azhar 304
//File: array.cpp
//Purpose: Holds the class member functions definitions

#include "array.h"

myArray::myArray(const myArray& source):size(source.size)
{ 
  cout << "Copy Constructor Called" << endl;
 
  //Dynamically allocate array
  ptr = new float [size];
  
  //Copy the information
  for (int i = 0; i < size; i++)
      ptr[i] = source.ptr[i];
}

myArray& myArray:: operator = (const myArray& source)
{
  cout << "Same object assigned = op called" << endl;
  size = source.size;
  //Deallocate previous pointer
  delete [] ptr;
  //Make the rhs array equal to the lhs.
  ptr = new float [size];
  for (int i = 0; i < size; i++)
    ptr[i] = source.ptr[i];
  return *this;  
}

myArray& myArray:: operator = (const int num)
{
  cout << "Float value assigned = op called" << endl;

  //Deallocate previous pointer
  delete [] ptr;
  //Make the number equal to every element
  ptr = new float[size];
  for (int i = 0; i< size; i++)
    ptr[i] = num;
  return *this;
}

void output(myArray arr)
{
  //Output information
  for (int i = 0;i < arr.size; i++)
    cout << arr.ptr[i] << ' ';

  cout << endl;
  return;
}
