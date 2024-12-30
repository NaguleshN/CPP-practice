#include<iostream>
using namespace std;

int main(){
    try{
        int n;
        
        // if(!(cin>>n)){
        if(cin.fail()){
            throw "error";
        }
        cout<<n;
    }
    catch(...){
        cout<<"Input mismatch Exception occured while reading the value";
    }
}