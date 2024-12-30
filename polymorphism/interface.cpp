#include<iostream>
using namespace std;

class Product {
    public:
    virtual void getProductDetails() = 0;  
    virtual void showBill() = 0;  
    
};

class Customer {
    public:
    int C_ID;
    string C_Name;
    
    Customer(int C_ID,string C_Name){
        this->C_ID=C_ID;
        this->C_Name=C_Name;
    }
    
    void showCutomerDetails(){
        cout<<"ID:"<<C_ID<<endl;
        cout<<"NAME:"<<C_Name<<endl;
        
    }
};

class OrderOnline : public Product , public Customer{
    
    public:
    int noOfItems;
    
    OrderOnline(int id ,string name): Customer(id,name) { }    
    
    void getProductDetails(){
        
        cin>>noOfItems;
        string product[noOfItems];
        int cost[noOfItems];
        int sum=0;
        
        for(int j=0;j<noOfItems;j++){
            cin>>product[j];
            cin>>cost[j];
            sum+=cost[j];
        }
        
        if(sum>10000 && sum<=30000){
            sum=(5*sum/100)+sum;
        }
        else if(sum>30000 && sum<=50000){
            sum=(7*sum/100)+sum;
        }
        else if(sum>50000){
            sum=(9*sum/100)+sum;
        }
        
        cout<<"Bill:"<<sum<<endl;
    }
    
    void showBill(){
        
    }
};


int main(){
    int n;
    cin>>n;
    
    OrderOnline *c[n];
    
    for(int i=0 ;i<n;i++){
        int id;
        string name;
        cin>>id>>name;
        c[i] =  new OrderOnline(id,name);
        c[i]->showCutomerDetails();
        c[i]->getProductDetails();
        
        
    }
    
}