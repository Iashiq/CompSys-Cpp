#ifndef PRINTER_H_INCLUDED
#define PRINTER_H_INCLUDED

#include "Equipment.h"
//child class
class Printer : public Equipment
{
protected:
    double printingSpeed;
public:
//instructor declaration
    Printer(int id, double price, double printingSpeed);
//overriding the print function from base class using polymorphism
    virtual void print() const override;
};


#endif // PRINTER_H_INCLUDED
