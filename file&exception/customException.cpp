#include<iostream>
using namespace std;

class InvalidEmailException {
    
  public:
  string msg;
  InvalidEmailException(const string& s){
      msg=s;
  }
};

int main(){
    string s;
    cin>>s;
    int len = s.length();
    try{
        int atpos,dotpos;
        if(!isalpha(s[0])){
            // throw "Invalid Email Id!!!";
            throw InvalidEmailException("Invalid Email Id!!!");
        }
        
        atpos=s.find('@');
        dotpos=s.rfind('.');
        
        if(atpos==-1 || dotpos == -1){
            throw InvalidEmailException("Invalid Email Id!!!");
            // throw "Invalid Email Id!!!";
            
        }
        
        if(atpos>dotpos){
            throw InvalidEmailException("Invalid Email Id!!!");
            // throw "Invalid Email Id!!!";
        }
        
        if(atpos==0 || (dotpos-atpos==1) || (atpos==len) ){
            throw InvalidEmailException("Invalid Email Id!!!");
            // throw "Invalid Email Id!!!";
        }
        cout<<"Email Id is Valid";
    }
    // catch(const char* c){
    //     cout<<"Exception caught..."<<endl;
    //     cout<<c;
    // }
    
    catch(const InvalidEmailException& e){
        cout<<"Exception caught..."<<endl;
        cout<<e.msg;
    }
    
}