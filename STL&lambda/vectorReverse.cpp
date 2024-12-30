#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void customReverse(vector<int> arr)
{
    reverse(arr.begin(),arr.end());
    for(int i:arr){
        cout<<i<<" ";
    }
}

int main(){
    int n,num;
    cin>>n;
    vector<int> arr;
    for (int i=0;i<n;i++){
        cin>>num;
        arr.push_back(num);
    }
    customReverse(arr);
}