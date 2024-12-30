#include<iostream>
#include<stack>
using namespace std;

int main(){
    int n,m;
    cin>>n;
    stack<int> arr;
    for(int i=0;i<n;i++){
        cin>>m;
        arr.push(m);
    }
    if(arr.size()>0){
        
        cout<<"Top element before popping: "<<arr.top()<<endl;
        arr.pop();
        cout<<"Popped one element."<<endl;
    }
    else{
        
        cout<<"Stack is empty."<<endl;
    }
    int a,b;
    cin>>a>>b;
     arr.push(a);
     arr.push(b);
    cout<<"Top element of the stack: "<<arr.top()<<endl;
}