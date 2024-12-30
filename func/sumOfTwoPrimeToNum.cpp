#include<iostream>
using namespace std;

int  prime(int n)
{
    if(n==1)
    return 0;
    for(int i=2;i<=n/2;i++)
    if(n%i==0)
    return 0;
    return 1;
}
void primesum(int n, int i, int *flag)
{
    if(i>n/2)
    {
        if(*flag==0)
        cout<<n<<" cannot be expressed as the sum of two prime numbers";
        return; 
    }
    if(prime(i)&&prime(n-i))
    {
        *flag=1;
        cout<<n<<" = "<<i<<" + "<<(n-i)<<endl;
    }
    primesum(n,i+1,flag);
}

int main()
{
    int n,flag=0;
    cin>>n;
    primesum(n,2,&flag);
    
}