//Programmer: Logan Choi
//MST Username: lcmdk
//Section: 304 Azhar
//File: time.h
//Purpose: This file holds the time class and its member functions.

#ifndef TIME_H
#define TIME_H
#include <iostream>

//Global Constants
const int MAX_HOUR = 24;
const int MAX_MIN = 60;
const int MAX_SEC = 60;

//Time() will set the member's variables.
//Pre: All the parameters should be positive numbers.
//Post: The numbers are stored

//Time operator+ () should add the times together and return them
//Pre: The two parameters should be valid positive time numbers.
//Post: The two times are added and returned.

//The showTime() should print out all the times.
//Pre: none
//POst: the times are printed out.
class Time
{
  public:
    Time(int hour=0, int min=0, int sec=0): 
        m_hour(hour), m_min(min), m_sec(sec){}
    Time operator + (Time t1);
    void showTime();
  private:
    int m_hour;
    int m_min;
    int m_sec;
};

#endif
