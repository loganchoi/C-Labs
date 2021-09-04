//Programmer: Logan Choi
//MST Username: lcmdk
//Section: Azhar 304
//File:lab12.cpp
//Purpose: This is the main function that will drop and enroll students
//by calling class functions.

#include "students.h"

//Initialize the static member variable
int cs1580:: total_cs1580_students = 0;

int main()
{ 
  //Declare the two objects.
  cs1580 sec_304(304,15,15), sec_307(307,20,10);
  
  //Print the out
  cout << sec_304;
  cout << sec_307;

  cout << "Enrolling 5 male students in section 304..." << endl
       << "Dropping 5 male students from section 307..." << endl;

  //Enroll or Drop the number of Males, and update
  sec_304.enrollMale(5);
  sec_307.dropMale(5);
 
  //Print the updated objects.
  cout << sec_304;
  cout << sec_307;

  cout << "Enrolling 5 female students in section 307..." << endl
       << "Dropping 5 female students from section 304..." << endl;
  
  //Enroll or Drop the number of Females, and update
  sec_304.dropFemale(5);
  sec_307.enrollFemale(5);

  //Print the updated objects.
  cout << sec_304;
  cout << sec_307;

  cout << "Enrolling 3 new female students in section 304..." << endl;
  
  //Enroll 3 Females in section 304, and update
  sec_304.enrollFemale(3);
  
  //print the updated object
  cout << sec_304;
  return 0;
}
