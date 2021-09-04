//Programmer: Logan Choi
//MST Username: lcmdk
//Section: Azhar 304
//File: students.cpp
//Purpose: This holds the member functions of class CS1580.

#include "students.h"

cs1580::cs1580(int section, int male, int female)
{
   //Just take the parameters and make them equal
   //to their corresponding member variable
   male_students = male;
   female_students = female;
   section_number = section;
   total_cs1580_students += male + female;
}

void cs1580::enrollMale (int n)
{
  //Add the males to the total # of students, and
  //number of males in that particular section
  total_cs1580_students += n;
  male_students += n;
  return;
}

void cs1580::dropMale (int n)
{
  //Subtract the males from the total # of students, and
  //number of males in that particular section
  total_cs1580_students -= n;
  male_students -= n;
  return;
}

void cs1580::enrollFemale (int n)
{
  //Add the females to the total # of students, and
  //number of females in that particular section
  total_cs1580_students += n;
  female_students += n;
  return;
}

void cs1580::dropFemale (int n)
{
  //Subtract the females from the total # of students, and
  //number of females in that particular section
  total_cs1580_students -= n;
  female_students -= n;
  return;
}

ostream& operator << (ostream& out, const cs1580& c)
{
  //Print out type cs1580 in a certain order.
  out << "\n{\ntotal_cs1580_students: " << c.total_cs1580_students << endl
      << "section_number: " << c.section_number << endl
     << "male_students: " << c.male_students << endl
     << "female_students: " << c.female_students << endl
     << "}\n\n";
  return out;
}
