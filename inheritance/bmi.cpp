#include<iostream>
#include<iomanip>
using namespace std;

class BMI{
    public:
    float weight,height,bmi;
    void calculateBMI(){
        bmi = weight/(height*height);
        // cout<<bmi;
    }  
};

class BloodPressure{
    public:
    int sys,dys;  
};

class Health :public BMI , public BloodPressure{
    public:
    Health(){
        cin>>weight>>height>>sys>>dys;
    }
    
    void getBMI(){
        calculateBMI();
        cout<<fixed<<setprecision(2);
        cout<<"BMI: "<<bmi<<endl;
        cout<<"Health Status: ";
        
        if(bmi<18.5&&sys<90&&dys<60){
            cout<<"Underweight with Low Blood Pressure";
        }
        else if( bmi>=18.5&&bmi<24.9&&sys>=90&&sys<=120&&dys<=80&&dys>=60 ){
            cout<<"Healthy Weight with Normal Blood Pressure"; 
        }
        else if(bmi>=25.0&&bmi<29.9&&sys>120&&dys>80){
            cout<<"Overweight with High Blood Pressure";
        }
        else{
            cout<<"Health Risk Undefined";
            
        }
    }
};

int main(){
    Health h ;
    h.getBMI();
}