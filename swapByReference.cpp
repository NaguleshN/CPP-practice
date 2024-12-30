// You are using GCC
#include<iostream>
using namespace std;

void swapByValue(int firstVariable , int secondVariable ){
    int c;
    c=firstVariable;
    firstVariable =secondVariable;
    secondVariable=c;
}
void swapByReference(int& first , int& second){

    int c= first;
    first= second;
    second= c;
    
}

int main(){
    int m,n;
    cin>>m>>n;
    cout<<"Before swap: value of a & b: "<<m<<" "<<n<<endl;
    swapByValue(m,n);
    cout<<"After swap by value: value of a & b: "<<m<<" "<<n<<endl;
    swapByReference(m,n);
    cout<<"After swap by reference: value of a & b: "<<m<<" "<<n<<endl;
    
}