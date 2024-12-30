// You are using GCC
#include<iostream>
using namespace std;

void changeMax(int *a,int *b,int c){
    if(*a>*b){
        *a=c;
    }
    else{
        *b=c;
    }
}

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int *p=&a,*q=&b;
    cout<<"Before: a = "<<a<<", b = "<<b<<endl;
    changeMax(p,q,c);
    cout<<"After: a = "<<a<<", b = "<<b;
    
}