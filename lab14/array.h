//Programmer: Logan Choi
//MST Username: lcmdk
//Section: Azhar 304
//File: array.h
//Purpose: This holds the function prototypes for palindrome and array.

#ifndef ARRAY_H
#define ARRAY_H
#include <iostream>
using namespace std;

typedef int* constPtrToInt;

//The printArray() will just print out the array.
//Pre: arr[0]..arr[size-1] is important data. Size is a positive number.
//Post: The array contents are printed out.
void printArray(const int arr[], const int size);

//The createArray() will create a pointer array, and fill it up.
//Pre: The parameter is a positive number. 
//Post: The pointer array is created and returned.
int* createArray(const int len);

//The isPalindrome() will check if the array is a palindrome.
//Pre: The parameters are pointing to the start and end of the array.
//Post: The array is checked and returned true or false.
bool isPalindrome(constPtrToInt start, constPtrToInt end);

#endif
