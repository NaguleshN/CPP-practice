#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

class Icecream{
  public:
  double vol;
  void Quantity(int r, int h){
      vol = 0.33*M_PI*r*r*h ;
      cout<<vol;
  }  
  
  void Quantity(int r){
      vol=r*r*r*1.0;
      cout<<vol;
      
  }  
};

int main(){
    int n;
    cin>>n;
    cout<<fixed<<setprecision(2);
    Icecream i;
    if(n==1){
        int j;
        cin>>j;
        i.Quantity(j);
    }
    else{
        int j,k;
        cin>>j>>k;
        i.Quantity(j,k);
    }
}