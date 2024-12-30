// You are using GCC
#include<iostream>
using namespace std;

int isprime(int n){
    
    if (n<=1) return 0;
    for(int i=2;i<=(n/2);i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int n;
    cin>>n;
    int flag=0;
    for(int i=1;i<n;i++){
        if(isprime(i)){
            int j=1;
            for (int j=1;j<n;j++){
                
                if(i<=j){
                    if(isprime(j)){
                        if((i+j)==n){
                            flag=1;
                            cout<<n <<" = "<<i<<" + "<<j<<endl;
                        }
                     }
                }
            }
        }
    }
    if(!flag){
        cout<<n<<" cannot be expressed as the sum of two prime numbers";
    }
}