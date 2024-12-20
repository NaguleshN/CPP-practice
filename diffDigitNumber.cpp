#include <iostream>
using namespace std;
int main(){
 int n,st,end,new_id;
    cin>>st>>end;
    int arr[5];
    new_id=st;
    while(st<=end){
        int i=0;
        int arr[5]={0,0,0,0,0};
        while(st>0){
            arr[i]=(st%10);
            st/=10;
            i++;
        }
            
        int flag=0;
        for (int j=0;j<i-1;j++){
            for (int k=j+1;k<i;k++){
                if(arr[j]==arr[k]){
                    flag=1;
                    break;
                }
            }
        }
        
        if (!flag){
            cout<<new_id<<" ";
        }
        st=new_id+1;
        new_id+=1;
    }
}