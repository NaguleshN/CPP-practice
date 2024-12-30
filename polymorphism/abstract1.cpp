#include<iostream>
using namespace std;

class Accounts {
    public:
    int balance , accno ;
    string name , address ;
    
    virtual void withdrawal(int amount ) = 0;
    virtual void deposit(int amount ) = 0;
    virtual void display() = 0;
    
};

class SavingsAccount : public Accounts {
    public:
    int rateOfInterest ;
    
    SavingsAccount(int a,int bal,string n, string addr){
        accno=a;
        balance=bal;
        name=n;
        address=addr;
        cin>>rateOfInterest;
        
    }
    
    void calcamt(int bal){
        cout<<((rateOfInterest*bal/100)+bal)<<endl;
    }
    
    void deposit(int amt){
        balance=balance+amt;
        cout<<balance<<endl;
    }
    
    void withdrawal(int amt){
        balance=balance-amt;
        cout<<balance<<endl;
        
    }
    
    void display(){
        cout<<accno<<" "<<name<<" "<<balance<<" "<<address<<endl;
        calcamt(balance);  
    }
};

class CurrentAccount : public Accounts {
    public:
    int draftLimit ;
    
    CurrentAccount(int a,int bal,string n, string addr){
        accno=a;
        balance=bal;
        name=n;
        address=addr;
        cin>>draftLimit;
    }
    
    void deposit(int amt){
        balance=balance+amt;
        cout<<balance<<endl;
    }
    
    void withdrawal(int amt){
        balance=balance-amt;
        cout<<balance<<endl;
        
    }
    
    void display(){
        cout<<accno<<" "<<name<<" "<<balance<<" "<<address<<endl;
        cout<<draftLimit<<endl;
    }
};

int main(){
    int accno,bal,type;
    string name, addr;
    int opt,amt;
    
    cin>>accno>>bal>>name;
    cin.ignore();
    
    getline(cin,addr);
    cin>>type;
    
    if (type == 1){
        SavingsAccount s(accno,bal,name,addr);
        cin>>opt;
        cin>>amt;
        s.display();
        if(opt==1){
            s.deposit(amt);
        }
        else if(opt==2){
            s.withdrawal(amt);
        }
    }
    else if (type == 2) {
        CurrentAccount c(accno,bal,name,addr);
        cin>>opt;
        cin>>amt;
        c.display();
        if(opt==1){
            c.deposit(amt);
        }
        else if(opt==2){
            c.withdrawal(amt);
        }
    }
}