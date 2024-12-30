#include<iostream>
#include<iomanip>
using namespace std;



class TravelPlan{
    public:
    int days;
    float budget;
};

class BudgetTravel: public TravelPlan{
    public:
    float base;
    void calculate(){
        base=1.2*(budget/days);
        
        // cout<<base;
    }
};

class SoloTravel : public BudgetTravel{
    public:
    float lodge,food;
    SoloTravel(){
        cin>>days>>budget>>lodge>>food;
    }
    
    void find(){
        float total = base + lodge + food;
        cout<<fixed<<setprecision(2);
        cout<<"Rs. "<<total;
    }
    
    
};

int main(){
    SoloTravel s;
    s.calculate();
    s.find();
    
}