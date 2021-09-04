// Programmer: Logan Choi
// MST Username: lcmdk
// Instructor: Azhar
// Section: 304
// Date: 01/29/20
// File: lab2.cpp
// Purpose: Coding standard and debugging

//including the I/O stream library
#include <iostream>
using namespace std;

int main()
{
  // List out variables and their types
  int multiplicand;
  int multiplier;
  int product;
  int temp_today;
  int temp_yesterday;
  int sum_temp;

  //display brief welcome message
  cout << "I can do multiplication!" << endl;
 
  //read multiplicand from keyboard
  cout << "Enter the multiplicand: " << endl;
  cin >> multiplicand;
  
  //read multiplier from keyboard
  cout << "Enter the multiplier: " << endl;
  cin >> multiplier;

  // perform multiplication as * operator
  product = multiplicand * multiplier;

  // display the result
  cout << multiplicand << " * " << multiplier << " = " << product << endl;
  
  // display brief welcome message for temperature addition
  cout << "Now let's add today's and yesterday's temperature." << endl;

  // read today's temperature from the keyboard.
  cout << "Enter today's temperature: " << endl;
  cin >> temp_today;
  
  // read yesterday's temperature from the keyboard
  cout << "Enter yesterday's temperature: " << endl;
  cin >> temp_yesterday;

  // add the two temperature
  sum_temp = temp_today + temp_yesterday;
  cout << temp_today << " + " << temp_yesterday << " = " << sum_temp << endl;

  return 0;
}


