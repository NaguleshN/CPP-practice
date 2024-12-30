#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

class ShapeCalculator {
    public:
    virtual void calc(int n) = 0;
};

class Square : public ShapeCalculator {
    public:
    void calc(int n){
        cout<<(n*n)<<" "<<(4*n)<<endl;
    }
    
};

class Circle : public ShapeCalculator {
    public :
    void calc (int n){
        if(n%10==0){
            cout<<fixed<<setprecision(1);
            cout<<(3.14*n*n)<<" "<<(2*3.14*n)<<endl;
        }
        else{
        cout<<fixed<<setprecision(2);
        cout<<(3.14*n*n)<<" "<<(2*3.14*n)<<endl;
        }
    }
};


int main() {
    int n;
    cin >> n;
    Square sq;
    sq.calc(n);
    Circle cr;
    cr.calc(n);
    return 0;
}