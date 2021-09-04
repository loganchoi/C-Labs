//Programmer: Logan Choi
//MST Username: lcmdk
//Instructor: Azhar
//Section: 304
//Date: 3/18/2020
//File: files_funct.cpp
//Purpose: The actual functions that will return/output the results.

#include <fstream>
#include <iostream>
#include "files.h"
using namespace std;

//This function will take input from the file, and output the two arrays,
//the sum, the total size, and the average.
void in_out()
{
   //Variables
   ifstream in("input.txt");
   ofstream out("output.txt");
   int size1;
   int size2;
   double sum = 0;
   double cur_val; //current value
   
   in >> size1;
   cout << "Whole array: " << endl;
   out << "Whole array: " << endl;
    
   //Get input from file and output it on screen, and add to total.
   for (int i = 0; i < size1; i++)
   {
      in >> cur_val;
      cout << cur_val << " ";
      out << cur_val << " ";
      sum += cur_val;
   }

   in >> size2;
   
   //Continue to get input from file and output it on screen,
   //and adding it to sum.
   for (int i = 0; i < size2; i++)
   {
      in >> cur_val;
      cout << cur_val << " ";
      out << cur_val << " ";
      sum += cur_val;
   }
   
   cout << endl << "Array size: " << size1 + size2
        << " sum: " << sum << " Avg: "
        << sum/(size1+size2) << endl;
   out << endl << "Array size: " << size1 + size2
       << " sum: " << sum << " Avg: "
       << sum/ (size1+size2) << endl;

  
   //closes input file and output file.
   in.close();
   out.close();  
   
   //returns the index in which the new array is not needed.
   return;   
}
