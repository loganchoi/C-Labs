//Programmer : Logan Choi
//MST Username: lcmdk
//Instructor Name: Azhar
//Section: 304
//Date: 02/12/2020
//File: lab4.cpp
//Purpsoe: With given integer, output digits using if-else statements

#include <iostream>
using namespace std;

int main()
{
   //Variable Declarations
   
   int user_num; //user input integer
   int digit; //current digit 
   

   // Welcome message

   cout << "Hello, please enter a whole number!" << endl;
   cin >> user_num;


   // While loop, consistently checks if user_num is greater than zero.

   while (user_num > 0)
   {
      // digit is the digit by finding the remainder of 10
      digit  = user_num % 10;

      // if digit is even, add 5.
      if (digit % 2 == 0)
      {
         digit = digit + 5;
        
         // after adding 5, if it is greater or equal to 10, pick
         // least significant digit. Otherwise, output digit.
         if (digit >= 10)
         { 
           cout << digit % 10 << endl;
         }
         else
         {
           cout << digit  << endl;
         }
      }
      
      // if digit is odd, subtract 8
      else
      {
        digit = digit - 8;
       
        //after subtracting 8, if it is less than 0, square digit.
        // Otherwise, output digit.
        if (digit < 0)
        {
           digit = digit * digit;
           
           //if digit is now greater than or equal to 10, pick
           // most significant digit.
           if (digit >= 10)
           {
              cout << digit / 10 << endl;
           }
        } 
        else
        {
           cout << digit << endl;
        }
      }

      // decrement user_num by taking the ones digit away.
      user_num = user_num / 10;     
   }
   return 0;
}
