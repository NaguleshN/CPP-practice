#include<iostream>
#include<fstream>

using namespace std;

int main(){
    int n,flag=1;
    cin>>n;
    int arr[n];
    
    ofstream out;
    out.open("ages.txt");
    for(int i=0;i<n;i++){
        cin>>arr[i];
        out<<arr[i]<<" ";
    }
    out.close();
    
    ifstream in;
    in.open("ages.txt");
    int arr1[n];
    for(int i=0;i<n;i++){
        in>>arr1[i];
        // cout<<arr1[i]<<" ";
    }
    in.close();
    
    ofstream out1;
    out1.open("ages.txt");
    for(int i=0;i<n;i++){
        if(arr1[i]>=20 && arr1[i]<=40){
             out1<<arr1[i]<<" ";
             cout<<arr1[i]<<endl;
             flag=0;
        }
    }
    // cout<<flag;
    if(flag){
        out1<<0;
        cout<<0;
    }
    out1.close();
    
    
    
}