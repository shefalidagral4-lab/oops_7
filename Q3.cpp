#include <iostream>
using namespace std;

class shape{
    public:
    virtual void area(){
        cout<<"Area of a shape"<<endl;
    }
};
class rectangle: public shape{
    float length,breadth;
    public:
    rectangle(float l, float b){
        length = l;
        breadth = b;
    }
    void area(){
        cout<<"Area of rectangle: "<<length * breadth<< endl;
    }
};
class circle: public shape{
    float radius;
    public:
    circle(float r){
        radius = r;
    }
    void area(){
        cout<<"Area of circle: "<<3.14 * radius * radius<<endl;
    }
};
int main(){
    shape* ptr;
    rectangle r(2,3);
    circle c(4);

    ptr = &r;
    ptr->area();

    ptr = &c;
    ptr->area();
}