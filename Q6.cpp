#include <iostream>
using namespace std;

// 6. Create a base class Person with a virtual destructor and a derived class
// Student with its own destructor. Create a dynamically allocated Student
// object using a base-class pointer and delete it. Observe and explain the
// order in which the destructors execute.

class Person
{
public:
    Person()
    {
        cout<<"Person Constructor"<<endl;
    }

    virtual ~Person()
    {
        cout<<"Person Destructor"<<endl;
    }
};

class Student : public Person
{
public:
    Student()
    {
        cout<<"Student Constructor"<<endl;
    }

    ~Student()
    {
        cout<<"Student Destructor"<<endl;
    }
};

int main()
{
    Person *ptr = new Student();
    delete ptr;

    return 0;
}
