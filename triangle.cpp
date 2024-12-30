#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int *p=&a ,*q=&b ,*r=&c;
    
    if((*p+*q+*r)==180){
        
        if((*p==*q)&&(*q==*r)){
            cout<<"Equilateral triangle";
        }
        else if((*p==*q)||(*q==*r) ||(*p==*r)){
            cout<<"Isosceles triangle";
            
        }
        else{
            
            cout<<"Scalene triangle";
        }
    }else{
        cout<<"The given angles do not form a triangle.";
    }
}