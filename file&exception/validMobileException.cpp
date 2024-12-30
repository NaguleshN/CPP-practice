#include<iostream>
#include<fstream>
using namespace std;

int main(){
    string s;
    cin>>s;
    int len =s.length();
    int count=0;
    try{
        for(int i=0;i<len;i++){
            if(!isdigit(s[i])){
                throw "Invalid input";
            }
            count++;
        }
        cout<<s<<endl;
        if(count!=10){
            throw "The mobile number should have 10 digits";
        }
        else{
            cout<<"The entered mobile number is valid";
        }
    }
    catch(const char* c){
        cout<<c;
    }
}