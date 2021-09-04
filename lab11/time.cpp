//Programmer: Logan Choi
//MST Username: lcmdk
//Section: 304 Azhar
//File: time.cpp
//Purpose: This holds the member functions definitions for the time class.

#include "time.h"
using namespace std;

Time Time::operator + (Time t)
{  
   //Local Variables
   Time temp;
   int remainder;
 
   //This will add the remainders and find the new hour, minutes, seconds
   temp.m_sec = (this -> m_sec + t.m_sec) % MAX_SEC;
   remainder = (this->m_sec + t.m_sec) / MAX_SEC;
   temp.m_min = (this -> m_min + t.m_min + remainder) % MAX_MIN;
   remainder = (this -> m_min + t.m_min + remainder) / MAX_MIN;
   temp.m_hour = (this -> m_hour + t.m_hour + remainder) % MAX_HOUR;
   return temp;
}


void Time::showTime()
{
  //Print out all the times.
  cout << m_hour << ":" << m_min << ":" << m_sec << endl;
  return;
}
