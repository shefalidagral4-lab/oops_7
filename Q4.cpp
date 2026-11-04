#include <iostream>
using namespace std;

// 4. Create a base class Employee with data members name and basicSalary and
// a virtual function calculateSalary(). Derive classes PermanentEmployee
// and ContractEmployee that calculate salary differently. Call the overridden
// functions using a base-class pointer.

class employee{
    protected:
    string name;
    float basicSal;
    public:
    employee(string n, float s){
        name = n;
        basicSal = s;
    }
    virtual void calculateSal(){
        cout<<"Calculating Salary"<<endl;
    }
};
class permanentEmp: public employee{
    public:
    permanentEmp(string n, float s): employee(n,s){

    }
    void calculateSal(){
        float salary = basicSal + (basicSal * 0.20);
        cout << "Permanent Employee: " << name << endl;
        cout << "Total Salary = " << salary << endl;
    }
};
class contractEmp: public employee{
    public:
    contractEmp(string n, float s): employee(n,s){

    }
    void calculateSal(){
        float salary = basicSal + (basicSal * 0.10);
        cout << "Contract Employee: " << name << endl;
        cout << "Total Salary = " << salary << endl;
    }
};
int main(){
    employee* ptr;
    permanentEmp p("Raj", 35000);
    contractEmp c("Shreya", 22000);
    ptr = &p;
    ptr->calculateSal();

    ptr = &c;
    ptr->calculateSal();
    return 0;
}