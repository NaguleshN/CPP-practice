#include<iostream>
#include<fstream>
using namespace std;


class item {
  public:
    int code;
    string name;
    int price;
    int q;

};

int main(){
    int n;
    cin>>n;
    
    item arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i].code>>arr[i].name>>arr[i].q>>arr[i].price;
    }
    
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i].price<arr[j].price){
                item it;
                it=arr[i];
                arr[i]=arr[j];
                arr[j]=it;
            }
        }
    }
    
    ofstream file;
    file.open("item.txt");
    for(int i=0;i<n;i++){
        cout<<arr[i].code<<" "<<arr[i].name<<" "<<arr[i].q<<" "<<arr[i].price<<endl;
        file<<arr[i].code<<" "<<arr[i].name<<" "<<arr[i].q<<" "<<arr[i].price<<endl;
        
    }
    file.close();
}