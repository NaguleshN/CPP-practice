// David is assigned a programming task in his computer science class. 

// The task involves creating two classes: a Box class and a Main class. In the Main class, he is required to instantiate an object of the Box class and calculate the volume of the box. 



// Help David as he needs your assistance in completing this programming task.

// Input format :
// The input consists of three space-separated double values, representing the width, height and depth of the box.

// Output format :
// The output prints a double value, representing the volume of the box, rounded off to two decimal places.



// Refer to the sample output for the exact text and format.

// Code constraints :
// 1.1 ≤ width, height, depth ≤ 50.0

// Sample test cases :
// Input 1 :
// 7.2 8.3 1.1
// Output 1 :
// Volume: 65.74
// Input 2 :
// 2.2 1.1 3.2
// Output 2 :
// Volume: 7.74
#include<iostream>
#include<iomanip>
using namespace std;

class Box{
    
    public:
    float width,height,depth;
        
};

class Main{
    public:
    void calculateVolume(float w,float h,float d){
        
        Box b;
        b.width=w;
        b.height=h;
        b.depth=d;
        
        float vol;
        vol=w*h*d;
        cout<<"volume: "<<fixed <<setprecision(2)<<vol;
        
    }
};

int main(){
    float w,h,d;
    cin>>w>>h>>d;
    Main m;
    m.calculateVolume(w,h,d);
}