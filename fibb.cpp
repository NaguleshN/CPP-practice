// You are using GCC
#include<iostream>
using namespace std;

int fibb(int n){
    if(n<=1)return n;
    return fibb(n-1)+fibb(n-2);
}

int main(){
    int n;
    cin>>n;
    int sum=0;
    for(int i=0;i<n;i++){
        int *p= &i;
        cout<<fibb(*p)<<" ";
        sum += fibb(*p);
        
    }
    cout<<endl<<sum;
}