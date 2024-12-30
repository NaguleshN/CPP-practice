#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    float f;
    cin>>f;
    auto getPrice= [](float val){
        return 0.8*val;
    };
    cout<<fixed <<setprecision(2);
    cout<<getPrice(f);
}