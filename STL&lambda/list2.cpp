#include<iostream>
#include<list>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    if(n>15){
        cout<<"-1";
        return 0;
    }
    else{
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        
        list<int> l;
        l.assign(arr,arr+n);
        l.sort();
        l.unique();
        int sum=0;
        
        for(list<int> :: iterator i=l.begin();i!=(l.end());i++){
            // cout<<*i<<" ";
            sum+=*i;
        }
        cout<<"Sum of unique elements: "<<sum;
        
    }
    
}