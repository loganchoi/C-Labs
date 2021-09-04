//Programmer: Logan Choi
//MST Username: lcmdk
//Instructor: Azhar
//Section: 304
//Date: 3/11/2020
//File: helper.hpp
//Purpose: It has all the functions that will output arrays and
//         write a new array.

#include <iostream>
using namespace std;

template <class T>
void howManyGreaterItems(const T arr[], int result [], const int size)
{
  //Local Variables
  int counter;
  T num;
  
  //Nested for loop that will take an element and compare
  //it with all the other elements.
  for (int i = 0; i < size; i++)
  {
    num = arr[i];
    counter = 0;
    for (int j = 0; j < size ; j++)
      {
         //If greater than current element, then increment counter
         if (num < arr[j])
          {
             counter ++;
          }
      }  
    
    //Set respective index for result equal to ocunter.
    result[i] = counter;
  }
  
  //Calls printArray() to print result array.
  cout << "Result array: " << endl;
  printArray(result, ARRAY_SIZE);

  return;
}




template <class T>
void printArray (const T arr[], const int size)
{ 
  //Cycles thorugh array and prints out elements.
  for (int i = 0; i < size; i++)
    cout << arr[i] << " ";
  
  //Just sets a new line for clean output.
  cout << endl;

  return;
}
