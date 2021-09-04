//Programmer: Logan Choi
//MST Username: lcmdk
//Section: Azhar 304
//File: array.h
//Purpose: This holds the array class

#ifndef ARRAY_H
#define ARRAY_H
#include <iostream>
using namespace std;

//myArray(size) is a constructor that dynamically allocates a new array
//with given size.
//Pre: size is a positive whole number;
//Post: The array is allocated with the given size.

//myArray() is a default constructor that just sets everything to zero or
//null.
//Pre: None
//Post: The size is set to zero, and ptr is set to nullptr;

//myArray(myArray& source) is a copy constructor, that will copy the info
//from one array to another.
//Pre: The parameter has useful data.
//Post: The info is copied.

//The ~myArray() is a destructor that will set all the dynamic memory back
//to heap.
//Pre: None
//Post: The memory is deallocated.

//The operator = () will either take an myArray object or a integer.
//It will set the lhs array equal to the object or integer.
//Pre: Useful data with the array.
//Post: The object is copied into the calling object.

//The output() will just print out the object.
//Pre: the parameter has useful data.
//Post: Information is outputted.

class myArray
{
  private:
    int size;
    float * ptr;
  public:
    myArray(const int size): size(size), ptr(new float[size])
      {cout << "Constructor with size called" << endl;}
    myArray(): size(0), ptr(nullptr) {cout << "Default called" << endl;}
    myArray(const myArray& source);
    ~myArray(){delete [] ptr; cout <<"Destructor called" << endl;}
    myArray& operator = (const myArray& source);
    myArray& operator = (const int num);
    friend void output(myArray arr);
};

#endif
