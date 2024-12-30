#include<iostream>
#include<iomanip>
using namespace std;

void func(int a,int b,int c,int d,int e,float* avg, float* per){
    int sum=a+b+c+d+e;
    *avg= (double)(sum*1.0)/5;
    *per = *avg;
}

int main(){
    int a,b,c,d,e;
    float avg,per;
    cin>>a>>b>>c>>d>>e;
    
    func(a,b,c,d,e,&avg,&per);
    cout<<fixed<<setprecision(2);
    cout<<"Average: "<<avg<<endl;
    cout<<"Percentage: "<<per<<"%";
}