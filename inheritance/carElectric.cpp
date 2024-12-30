#include<iostream>
#include<iomanip>
using namespace std;

class Vehicle {
    public:
    double fcapacity;
    
};

class Car: public Vehicle{
    public:
    double fefficiency,range;
    
    Car(){
        cin>>fcapacity>>fefficiency;
    }
    
    void calculate(){
        range=fefficiency*fcapacity;
        cout<<"Car Estimated Range: "<<range<<" miles"<<endl;
    }
};

class ElectricCar : public Car{
    public:
    double bcapacity,ecrange,ffefficiency;
    
    ElectricCar(){
        cin>>bcapacity>>ffefficiency;
    }
    
    void eccalculate(){
        ecrange=ffefficiency*bcapacity; 
        cout<<"Electric Car Estimated Range: "<<ecrange<<" miles";
    }
    
};

int main(){
    ElectricCar e;
    cout<<fixed<<setprecision(1);
    e.calculate();
    e.eccalculate();
}