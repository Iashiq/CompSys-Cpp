#include<iostream>
#include "Display.h"

using namespace std;
//display instructor
Display::Display(int id, double price, int yearOfAppropriation)
 : Equipment(id, price), yearOfAppropriation(yearOfAppropriation)
 {}
//print function
 void Display::print()const
 {
     //print the display id, price and year of appropriation
     cout<<"Display id: "<<id<<", Display price: "<<price<<", Year of appropriation:"<<yearOfAppropriation;
 }
