// You are using GCC
#include<iostream>
using namespace std;

void printHistogram(int *arr,int n){
    for(int i=0;i<n;i++){
        for(int j=1;j<=arr[i];j++){
            cout<<"x";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    if(n>0&&n<21){
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        printHistogram(arr,n);
    }
    else{
        cout<<"Invalid";
    }
}