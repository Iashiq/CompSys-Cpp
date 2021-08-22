#ifndef EQUIPMENT_H_INCLUDED
#define EQUIPMENT_H_INCLUDED

//base class
class Equipment{
protected:
    int id;
    double price;
public:
//instructor
    Equipment(int id, double price) : id(id), price(price);
//making accessible print function for child classes object
    virtual void print() const;//this function is implemented only in child classes
};


#endif // EQUIPMENT_H_INCLUDED
