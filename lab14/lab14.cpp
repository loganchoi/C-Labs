//Programmer: Logan Choi
//MST Username: lcmdk
//Section: Azhar 304
//File: lab14.cpp
//Purpose: 

#include "array.h"

int main()
{
  //Declaration
  int size;
  
  //Get size
  cout << "Enter the size of the array: ";
  cin >> size;
  
 
  //Dynamically Create array
  int * ptr = createArray(size);
  
  //Print Array
  printArray(ptr,size);

  //Checks to see if it is a palindrome or not
  if (isPalindrome(ptr, &ptr[size-1]))
     cout << "Is palindrome" << endl;
  else
     cout << "Is not palindrome" << endl;
  
  //Delete the memory allocations
  delete [] ptr;
  ptr = NULL;


  return 0;
}
