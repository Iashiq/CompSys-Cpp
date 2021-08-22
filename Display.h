#ifndef DISPLAY_H_INCLUDED
#define DISPLAY_H_INCLUDED

#include "Equipment.h"
//child class
class Display : public Equipment
{
protected:
   int yearOfAppropriation;
public:
//instructor declaration
    Dispaly(int id, double price, int yearOfAppropriation);
//overriding print function from base class using polymorphism
    virtual void print() const override;
};

#endif // DISPLAY_H_INCLUDED
