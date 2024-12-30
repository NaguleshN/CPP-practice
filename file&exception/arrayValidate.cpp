// Create an array of n sizes and add elements to it. Get a position and a value, and modify the same.



// If the position exceeds the size of the array, throw and catch an exception and print the same.

// Input format :
// The first line of input contains a single integer n, the size of the array.

// The second line of input contains n space-separated integers, the elements of the array.

// The third line of input contains two space-separated integers, position, and value, representing the index and value to be updated in the array.

// Output format :
// The output prints the modified or original array and if there is an exception then it prints "Index out of range".



// Refer to the sample outputs for the formatting specifications.

// Code constraints :
// 1 ≤ n ≤ 20;

// -100 ≤ elements ≤ 100;

// Sample test cases :
// Input 1 :
// 5
// 12 85 32 45 65
// 3 120
// Output 1 :
// 12 85 32 120 65 
// Input 2 :
// 5
// 12 85 32 45 65
// 6 88
// Output 2 :
// Index out of range
// 12 85 32 45 65 

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    
    for (int i=0 ;i<n;i++){
        cin>>arr[i];
    }
    
    try{
        int option,val;
        cin>>option>>val;
        if(option>=n ||option<0){
            throw "Index out of range";
        }
        arr[option]=val;
    }
    catch(const char* c) {
        cout<<c<<endl;
        
    }
    for (int i=0 ;i<n;i++){
        cout<<arr[i]<<" ";
    }
}