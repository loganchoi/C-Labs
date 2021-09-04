//Programmer: Logan Choi
//MST Username: lcmdk
//Instructor: Azhar
//Section: 304
//Date: 3/11/2020
//File: lab8.cpp
//Purpose: It has the two original arrays that will be called through
//         functions, and output them.


#include <iostream>
#include "helper.h"
using namespace std;

int main()
{
  //Local variables:
  int result[ARRAY_SIZE];
  int arr1[ARRAY_SIZE] = {8, 12, 1, 15, 9, 4, 7, 4, 5, 1}; 
  double arr2[ARRAY_SIZE] = {19.2, 15.5, 15, 3.2, 9.2, 9.1, 20.1, 4.5, 5.5, 1};
  
  //Calls printArray() and howManyGreaterItems() with int array.
  cout << "Given int array:" << endl;
  printArray(arr1, ARRAY_SIZE);
  howManyGreaterItems(arr1, result, ARRAY_SIZE);

  //Calls printArray() and howManyGreaterItmes() with double array.
  cout << "Given double array:" << endl;
  printArray(arr2, ARRAY_SIZE);
  howManyGreaterItems(arr2, result, ARRAY_SIZE);

  return 0;
}
