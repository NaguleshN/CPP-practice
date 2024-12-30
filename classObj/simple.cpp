#include <iostream>
using namespace std;


class College{
    int reg_no;
    string student_name;
    int age;
    public:
    
    void write(int age){
        
        cout<<"Age: "<<age;
        cout<<"Writing";
    }
    
};


int main()
{
    College* clg = new College();
    // College clg;
    clg->write(10);
    cout<<"Age: "<<clg.age<<endl;
    
    
    // std::string a;
    int m=4;
    int *p=&m;
    // cout<<p[0]<<endl;
    // cout<<"Hello World";

    return 0;
}