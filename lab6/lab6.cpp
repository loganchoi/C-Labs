//Programmer: Logan Choi
//MST Username: lcmdk
//Instructor: Azhar
//Section: 304
//Date: 2/26/2020
//File: lab6.cpp
//Description: Student ID and Grades Output

#include <iostream>
#include <cstdlib>
using namespace std;

//CONSTANTS
const short NUM_STUDENTS = 10; //Total number of students (array size)
const short NUM_GRADES = 6;    //number of different grades (A-F)

//A student's descriptions within the database.
struct student
{
   short m_badge_num;  //student ID
   char m_grade;       //student's grade
};

int main()
{  srand(time(NULL));

   //Variables
   student database[NUM_STUDENTS];  //student's database
   short grade_num;     //random num that has a Grade equivalent
   short a_grade = 0;  //total number of A's 
   short b_grade = 0;  //total number of B's
   short c_grade = 0;  //total number of C's
   short d_grade = 0;  //total number of D's
   short e_grade = 0;  //total number of E's
   short f_grade = 0;  //total number of F's
   

   cout << "Printing all students in database..." << endl;
   
   //for loop to assign each student their badge_num and grade.
   for (int i = 0; i < NUM_STUDENTS; i++)
   {
      database[i].m_badge_num = i + 1;
      grade_num = rand() % 6;
      //after getting random int, assigne student's equivalent
      //grade in array, and will increment the total number of that
      //certain grade.
      if (grade_num == 0)
      {
         database[i].m_grade = 'A';
         a_grade ++;
      }
      else if (grade_num == 1)
      {
         database[i].m_grade = 'B';
         b_grade ++;
      }
      else if (grade_num == 2)
      {
         database[i].m_grade = 'C';
         c_grade ++;
      }
      else if (grade_num == 3)
      {
         database[i].m_grade = 'D';
         d_grade ++;
      }
      else if (grade_num == 4)
      {
         database[i].m_grade = 'E';
         e_grade++;
      }
      else if (grade_num == 5)
      {
         database[i].m_grade = 'F';
         f_grade++;
      }
      cout << "Student ID: " << database[i].m_badge_num << ", Grade: "
           << database[i].m_grade << endl;      
   }
   //nested for loops in if-else that will check if there are positve number
   //of a certain grade, and outputs the student ID if they got the highest  grade 
   if (a_grade > 0)
   {
      cout << "The highest grade is A, and the students who got it are:" << endl;
      for (int i = 0; i< NUM_STUDENTS; i++)
      {
         if (database[i].m_grade == 'A')
            cout << "Student ID = " << database[i].m_badge_num << endl;
      }
   }
   else if (b_grade > 0)
   {
      cout << "The highest grade is B, and the students who got it are:" << endl;
      for (int i = 0; i < NUM_STUDENTS; i++)
      {
         if (database[i].m_grade == 'B')
            cout << "Student ID = " << database[i].m_badge_num << endl;
      }
   
   }
   else if (c_grade > 0)
   {
      cout << "The highest grade is C, and the students who got it are:" << endl;
      for (int i = 0; i < NUM_STUDENTS; i++)
      {
         if (database[i].m_grade == 'C')
            cout << "Student ID = " << database[i].m_badge_num << endl;
      }

   }
   else if (d_grade > 0)
   {
      cout << "The highest grade is D, and the students who got it are:" << endl;
      for (int i = 0; i < NUM_STUDENTS; i++)
      {
         if (database[i].m_grade == 'D')
            cout << "Student ID = " << database[i].m_badge_num << endl;
      }

   }
   else if (e_grade > 0)
   {
      cout << "The highest grade is E, and the students who got it are:" << endl;
      for (int i = 0; i < NUM_STUDENTS; i++)
      {
         if (database[i].m_grade == 'E')
            cout << "Student ID = " << database[i].m_badge_num << endl;
      }

   }
   else if (f_grade > 0)
   {
      cout << "The highest grade is F, and the students who got it are:" << endl;
      for (int i = 0; i < NUM_STUDENTS; i++)
      {
         if (database[i].m_grade == 'F')
            cout << "Student ID = " << database[i].m_badge_num << endl;
      }

   }

   return 0;
}
