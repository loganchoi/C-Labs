//Programmer: Logan Choi
//MST Username: lcmdk
//Section: Azhar 304
//File: students.h
//Purpose: This holds the CS1580 class and its members.


#ifndef STUDENTS_H
#define STUDENTS_H
#include <iostream>
using namespace std;

//The cs1580() will take in parameters and set the
//section_number, male_students, & female_students variables.
//Pre: All the parameters are non-negative whole numbers.
//Post: The member variables are set up.

//The enrollMale() will take in an int, and add it 
//to the total males in that class, and the total # of students.
//Pre: The parameter is a non-negative whole number.
//Post: The member variables are updated.

//The dropMale() will take in an int, and subtract it from
//the total males in that class, and the total # of students.
//Pre: The paramter is a non-negatvie whole number.
//Post: The member variables are updated.

//The enrollFemale() will take in an int, and add it 
//to the total females in that class, and the total # of students.
//Pre: The parameter is a non-negative whole number.
//Post: The member variables are updated.

//The dropFemale() will take in an int, and subtract it from
//the total females in that class, and the total # of students.
//Pre: The paramter is a non-negatvie whole number.
//Post: The member variables are updated.

//The ostream& operator <<() will just print out a cs1580 type 
//when declared.
//Pre: The object is filled with useful information.
//Post: The object and its contents is outputted.

class cs1580
{
  public:
    cs1580(int section, int male, int female);
    void enrollMale(int n);
    void dropMale(int n);
    void enrollFemale(int n);
    void dropFemale(int n);
    friend ostream& operator << (ostream& out, const cs1580& students); 

  private:
    static int total_cs1580_students;
    int section_number;
    int male_students;
    int female_students;
};

#endif
