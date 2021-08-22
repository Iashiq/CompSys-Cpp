#include<iostream>
#include "Printer.h"

using namespace std;
//printer instructor
Printer::Printer(int id; double price, double printingSpeed)
 : Equipment(id, price), printingSpeed(printingSpeed)
{}
//print function
void Printer::Print() const
{
//print the printer id, prince and printing speed
    cout<<"Printer id: "<<id<<", Printer price: "<<price<<", Printing Speed: "<<printingSpeed<<endl;
}


