#include<iostream>
#include<iomanip>
using namespace std;

class Vehicle{
    public:
    float feffeciency,maxcapacity;
};

class Car : public Vehicle{
    public:
    float range;
    void calculateRange(){
        range=feffeciency*maxcapacity;
        cout<<"Maximum Range: "<<range<<" km"<<endl;
    }
};

class EmilyCar : public Car{
    public :
    float pc,flw;
    
    EmilyCar(){
        cin>>feffeciency;
        cin>>maxcapacity;
    }    
    
    void payloadCapacity(){
        pc = (8.0/10)*maxcapacity;
        cout<<"Payload Capacity: "<<pc<<" kg"<<endl;
    }
    void fullyLoadedWeight(){
        flw=pc+range;
        cout<<"Fully Loaded Weight: "<<flw<<" kg"<<endl;
    }
    
};

int main(){
    EmilyCar e;
    cout<<fixed<<setprecision(2);
    e.calculateRange();
    e.payloadCapacity();
    e.fullyLoadedWeight();
}
