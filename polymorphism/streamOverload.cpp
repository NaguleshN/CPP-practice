#include <iostream>
using namespace std;

class Complex {
    int real,img;
    public:
    Complex(int r=0,int i=0){
        real=r;
        img=i;
    }
    
    friend ostream& operator<<(ostream& out, Complex& c){
        out << c.real<<"+i"<<c.img;
        return out;
    }
    
    friend istream& operator>>(istream& in, Complex& c){
        in >> c.real>>c.img;
        return in;
    }
    
};


int main(){
    int m,n;
    Complex c;
    
    cin>>c;
    cout<<"The complex object is "<<c;
}
