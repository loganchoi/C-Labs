//Programmer: Logan Choi
//MST Username: lcmdk
//Instructor: Azhar
//Section: 304
//Date: 3/11/2020
//File: helper.h
//Purpose: Sets up the prototype functions  and constants for the program.         


#ifndef BIG_ARRAY_H
#define BIG_ARRAY_H

//Global Constants
const int ARRAY_SIZE = 10;


//The howManyGreaterItems() counts how many elements are greater than the
//current element, then writes the integer into another array.
//Pre: arr[0]...arr[size-1] is data.
//Post: A new array is filled with the number of greater elements
//      of that index. 
template <class T>
void howManyGreaterItems(const T arr[], int result [], const int size);

//The printArray() prints out the elements of the array.
//Pre: arr[0]..arr[size-1] is data.
//Post: All the elements of the array are printed out on to the screen.
template <class T>
void printArray (const T arr[], const int size);


#include "helper.hpp"
#endif
