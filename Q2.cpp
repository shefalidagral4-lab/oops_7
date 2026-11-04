#include <iostream>
using namespace std;

// 2. Create a base class Animal with a virtual function sound(). Derive classes
// Dog and Cat that override sound() to display their respective sounds. Call
// the functions using base-class pointers.

class animal{
    public:
    virtual void sound(){
        cout<<"Sounds of animals"<<endl;
    }
};
class dog: public animal{
    public:
    void sound(){
        cout<<"Dog Barks"<<endl;
    }
};
class cat: public animal{
    public:
    void sound(){
        cout<<"Cat Meows"<<endl;
    }
};
int main(){
    animal* ptr;
    dog d;
    cat c;

    ptr = &d;
    ptr->sound();

    ptr = &c;
    ptr->sound();
    return 0;
}