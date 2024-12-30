#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int x,y;
    cin>>x>>y;
    try{
        if(x<0 || y<0 )
        throw "Error: Negative values not allowed for x and y.";
        long int a=pow(x,y);
        cout<<a;
    }
    catch(const char* c)
    {
        cout<<c;
    }
}