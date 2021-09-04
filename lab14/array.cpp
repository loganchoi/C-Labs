//Programmer: Logan Choi
//MST Username: lcmdk
//Section: Azhar 304
//File: array.cpp
//Purpose: This holds the function definitions of array.h

#include "array.h"

void printArray(const int arr[], const int size)
{
  cout << "The resulting array is : " << endl;

  //Print out the array

  for (int i = 0; i<size; i++)
     cout << arr[i] << " ";

  cout << endl;

  return;
}

int* createArray(const int len)
{ 
  //Declaration pointer
  int * ptr = new int[len];

  //Fill out array
  for (int i=0; i<len; i++)
  {
    cout << "Enter arr[" << i << "]: ";
    cin >> ptr[i];
  }

  //return pointer array
  return ptr;
}

bool isPalindrome(constPtrToInt start, constPtrToInt end)
{
  //Declaration
  bool result;
  result = true;

  //Loop that will break if the two opposite arrays 
  //do not match or they went past each other.
  do
  {
    if (*start != *end)
       result = false;
    start++;
    end--;
  }
  while (start < end && result == true);
  
  //return bool statement
  return result;
}
