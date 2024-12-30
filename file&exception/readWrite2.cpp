#include<iostream>
#include<fstream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    
    ofstream out;
    out.open("numbers.txt");
    for (int i=0;i<n;i++){
        cin>>arr[i];
        out<<arr[i]<<" ";
    }
    out.close();
    
    ifstream in;
    in.open("numbers.txt");
    int odd=0,even=0,num;
     for (int i=0;i<n;i++){
        in>>num;
        if(num%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    cout<<"Even : "<<even<<endl;
    cout<<"Odd : "<<odd<<endl;
    in.close();
}