#include<iostream>
#include<iomanip>
using namespace std;


class Population{
    public:
    long int population;
    Population(){
        cin>>population;
    }
    
};
class GDP{
    public:
    double gdp;
    GDP(){
        cin>>gdp;
    }
};


class Country : public Population ,public GDP{
    public :
    float gdpc;
    
    void gdpPerCapita(){
        gdpc=gdp/population;
    }
    
    void display(){
        cout<<"GDP: "<<fixed<<setprecision(2)<<gdpc;
    }
};

int main(){
    Country c;
    c.gdpPerCapita();
    c.display();
}