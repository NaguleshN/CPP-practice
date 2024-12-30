#include<iostream>
#include<iomanip>
using namespace std;

class Tenant{
    public:
    double monthly_income;
    float per;
   
};

class RentEligibility: public Tenant{
    
    public :
    RentEligibility(double monthly_income,  float per){
        this->monthly_income=monthly_income;
        this->per=per;
    }
    
    void eligibility(){
        if(monthly_income>15000){
            cout<<"Eligible"<<endl;
            rentamount();
        }
        else{
            cout<<"Not eligible";
        }
    }
    void rentamount(){
        double rent,tax;
        rent=(per*monthly_income)/100;
        tax=rent*5/100;
        cout<<"Rent Amount: "<<fixed<<setprecision(2)<<rent<<endl;
        cout<<"Tax: "<<fixed<<setprecision(2)<<tax<<endl;
    }
};

int main(){
    float inc,per;
    cin>>inc>>per;
    RentEligibility r(inc,per);
    r.eligibility();
    
}
