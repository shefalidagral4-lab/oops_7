#include <iostream>
using namespace std;

// 1. Create a base class with a function show() that prints "Current month is
// October". Create a derived class that overrides the show() function to print
// "Next month will be November". Create objects of both classes and call
// their functions.

class base{
    public:
    void show(){
        cout<<"Current month is October"<<endl;
    }
};
class derived: public base{
    public:
    void show(){
        cout<<"Current month is November"<<endl;
    }
};
int main(){
    base b;
    derived d;
    cout<<"Base class: "<<endl;
    b.show();
    cout<<"Derived class: "<<endl;
    d.show();
    return 0;
}