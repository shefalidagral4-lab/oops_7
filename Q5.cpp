#include <iostream>
using namespace std;

// 5. Create a base class Vehicle with a virtual function displayInfo(). Derive
// classes Car, Bike, and Bus, and override the function in each class to
// display the vehicle's details. Demonstrate runtime polymorphism using a
// base-class pointer.

class Vehicle
{
public:
    virtual void displayInfo()
    {
        cout<<"Vehicle Information"<<endl;
    }
};

class Car : public Vehicle
{
public:
    void displayInfo()
    {
        cout<<"Car: Four wheels and four seats"<<endl;
    }
};

class Bike : public Vehicle
{
public:
    void displayInfo()
    {
        cout<<"Bike: Two wheels and two seats"<<endl;
    }
};

class Bus : public Vehicle
{
public:
    void displayInfo()
    {
        cout<<"Bus: Large vehicle for public transport"<<endl;
    }
};

int main()
{
    Vehicle *ptr;

    Car c;
    Bike b;
    Bus bus;

    ptr = &c;
    ptr->displayInfo();

    ptr = &b;
    ptr->displayInfo();

    ptr = &bus;
    ptr->displayInfo();

    return 0;
}
