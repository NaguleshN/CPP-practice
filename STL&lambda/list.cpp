#include<iostream>
#include<list>
using namespace std;

int main(){
    int n,a;
    cin>>n;
    list<int> l;
    for(int i=0;i<n;i++){
        cin>>a;
        l.push_back(a);
    }
    cin>>a;
    l.remove(a);
    for(list<int> :: iterator i = l.begin();i!=l.end();i++ ){
        cout<<*i<<" ";
    }
}
