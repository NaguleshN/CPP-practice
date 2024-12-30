// You are using GCC
#include<iostream>
#include<iomanip>
using namespace std;

class Device{
    public:
    string brand;
    double price;
    
    Device(){
        cin>>brand>>price;
    }
  
};

class Television : public Device{

    int screenSize;
    float width,height,screenSize2,pixelD;
     
    public:
    
    Television(){
        cin>>screenSize;
    }
    void calculatePixelDensity(){
        
        cin>>width>>height;
        screenSize2=screenSize*2.54;
        pixelD=(width*height)/(screenSize2*screenSize2);
        
        cout<<"Television Information: "<<endl;
        cout<<"Device: "<<brand<<", Price: $"<<price<<endl;
        cout<<fixed<<setprecision(1);
        cout<<"Screen Size: "<<screenSize<<" inches ("<<screenSize2<<" cm)"<<endl;
        cout<<"Pixel Density: "<<pixelD<<" pixels per square centimeter"<<endl;
        
    }
  
};

class Refrigerator : public Device{
    int capacity;
    float energy,capacity2,egyef;
    
    public:
    Refrigerator(){
        cin>>capacity;
    }
    void calculateEnergyEfficiency(){
        cin>>energy;
        capacity2=capacity*0.0353;
        egyef=energy/capacity2;
        
        cout<<"Refrigerator Information: "<<endl;
        cout<<"Device: "<<brand<<", Price: $"<<price<<endl;
        cout<<fixed<<setprecision(1);
        cout<<"Capacity: "<<capacity<<" liters ("<<capacity2<<" cubic feet)"<<endl;
        cout<<"Energy Efficiency: "<<egyef<<" kWh per cubic foot"<<endl;
    }
};


int main(){
    Television t;
    Refrigerator r;
    
    t.calculatePixelDensity();
    cout<<endl;
    r.calculateEnergyEfficiency();
}