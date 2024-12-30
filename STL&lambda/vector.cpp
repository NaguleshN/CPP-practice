#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n,num;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        cin>>num;
        arr.push_back(num);
    }
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}