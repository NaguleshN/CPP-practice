#include<iostream>
using namespace std;

int main(){
    string s1,s2;
    
    auto concat = [](string s1,string s2){
        return s1+" "+s2;
    };
    
    getline(cin,s1);
    getline(cin,s2);
    cout<<concat(s1,s2);
}
