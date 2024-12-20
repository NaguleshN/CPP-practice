#include <iostream>
using namespace std;


int main()
{    
    
    int arr[]={80,90,85,89,100,112,1,110,12};
    int max1=arr[0],max2=arr[0];
    for (int i=0;i<sizeof(arr) / sizeof(arr[0]);i++){
        if (arr[i]>max1){
            max2=max1;
            max1=arr[i];
        }
        else if (arr[i]>max2){
            max2=arr[i];
            
        }
    }
    cout<<max1<<" "<<max2;

    return 0;
}