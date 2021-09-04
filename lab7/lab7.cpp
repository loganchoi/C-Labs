//Programmer: Logan Choi
//MST Username: lcmdk
//Instructor Name: Azhar
//Section: 304
//Date: 3/4/2020
//File: lab7.cpp
//Purpose: Output a random list with a certain size

#include <iostream>
#include <cstdlib>
using namespace std;

//Constants
const short LEN_ARRAY = 10;
const short MIN_RANGE = 100;
const short MAX_RANGE = 1000;


//initArray() fills the array with random integers
//Pre: The array should be filled with junk, and have size len. 
//Post: The array is filled with random integers.
void initArray (int arr[], const int len);

//printArray() prints out all the elements of array
//Pre: Array must be filled with random integers, and have size len.
//Post: Printed out all the elements of the array.
void printArray (const int arr[], const int len);

//swapMinMax() swaps the min position and max position in array.               
//Pre: Array must be filled with random integers, and have size len.
//Post: Max number and min number is swapped and outputted with their 
//      respected indices.
void swapMinMax (int arr[], const int len);

int main()
{ srand(time(NULL)); //random seed

  //Local Variable
  int arr[LEN_ARRAY];
  
  //Call functions
  initArray(arr,LEN_ARRAY);

  printArray(arr,LEN_ARRAY);
 
  swapMinMax(arr, LEN_ARRAY);

  printArray(arr, LEN_ARRAY);

  return 0;
}

void initArray (int arr[], const int len)
{ 
  //Puts a random integer in each element through for loop.
  for (int i = 0; i < len; i++)
    arr[i] = MIN_RANGE + rand() % (MAX_RANGE + 1 - MIN_RANGE);

  return;
}

void printArray (const int arr[], const int len)
{
  //Outputs all elements of the array through for loop.
  cout << "The array elements are:" << endl;
  for (int i = 0; i < len; i++)
    cout << arr[i] << endl;

  return;
}

void swapMinMax (int arr[], const int len)
{
  //swapMinMax() local variables
  short max_num = arr[0];
  short max_index = 0;
  short min_num = arr[0];
  short min_index = 0;
  short temp;
  
  //Finds max and min elements with their indices.
  for (int i = 1; i < len; i++)
  {
     if (arr[i] > max_num)
     {
       max_num = arr[i];
       max_index = i;
     }
     if (arr[i] < min_num)
     {
       min_num = arr[i];
       min_index = i;
     }
  }
  
  //Outputs max and min with their indices
  cout << "Min element is: " << min_num 
       << " at index: " << min_index << endl;
  cout << "Max element is: " << max_num
       << " at index: " << max_index << endl;
 
 //Swaps the max and min position
  temp = arr[max_index];
  arr[max_index] = arr[min_index];
  arr[min_index] = temp;
  
  return;
}
