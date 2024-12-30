#include<iostream>
#include<iomanip>
using namespace std;

class Employee{
    public:
    double salary,allow;
    
    void calculateSal(){
        cout<<"Total salary: "<<(salary*allow);
    }
};

class Manager: public Employee{
    double manager_allow;
    
    public:
    Manager(double salary,double allow ,double manager_allow){
        this->salary=salary;
        this->allow=allow;
        this->manager_allow=manager_allow;
    }
    void calculateSal(){
        cout<<"Total salary: "<<fixed<<setprecision(2)<<(salary+allow+manager_allow);
    }
    
};


int main(){
    double n,m,p;
    cin>>n>>m>>p;
    
    Manager manager(n,m,p);
    manager.calculateSal();
    
}