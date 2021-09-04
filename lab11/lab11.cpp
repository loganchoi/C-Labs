//Programmer: Logan Choi
//MST Username: lcmdk
//Section: 304 Azhar
//File: lab11.cpp
//Purpose: This is the main file that will call the member functions.


#include <iostream>
#include "time.h"
using namespace std;

int main()
{
  //Variables
  int h1,m1,s1,h2,m2,s2;
  
  //Get all the variables
  cout << "Enter first time's hour." << endl;
  cin >> h1;
  cout << "Enter first time's minutes." << endl;
  cin >> m1;
  cout << "Enter first time's seconds." << endl;
  cin >> s1;

  cout << "Enter second time's hour." << endl;
  cin >> h2;
  cout << "Enter second time's minutes." << endl;
  cin >> m2;
  cout << "Enter second tiem's seconds." << endl;
  cin >> s2;

  //INitialize all the times, then get the third time
  Time t1(h1,m1,s1);
  Time t2(h2,m2,s2);
  Time t3;
  //Add the first two times to get the third
  t3 = t1 + t2;

  //Print out all the times
  cout << "First time: "<< endl;
  t1.showTime();
  cout << "Second time: " << endl;
  t2.showTime();
  cout << "Total time: " << endl;
  t3.showTime();


  return 0;
}

