
// Categorization of Rating:

// "Average" if the Rating is in the range of 0.1 to 2.5.
// "Excellent" if the Rating is in the range of 2.6 to 5.0.


// Formulas used: Discounted Rate = (1 - (Discount Percentage / 100)) * Price Per Unit



// Refer to the below class diagram:





// Input format :
// The input consists of an integer n representing the count of the number of plants, a float value representing the price of each plant, a float value representing the discount percentage, and a float value representing the rating, separated by spaces.

// Output format :
// The first line displays "Final Price: " followed by a float value representing the final price of n plants rounded to two decimal places.

// The second line prints the category of the plants based on rating.

// It prints "Average" if the Rating is in the range of 0.1 to 2.5.
// It prints "Excellent" if the Rating is in the range of 2.6 to 5.0.


// Refer to the sample output for the formatting specifications.

// Code constraints :
// In this scenario, the test cases fall under the following constraints:

// 1 ≤ n ≤ 50

// 1 ≤ Price ≤ 1000

// 0.0 ≤ rating ≤ 5.0

// 0 ≤ Discount Percentage ≤ 100

// Sample test cases :
// Input 1 :
// 2 100.50 2.5 3.6
// Output 1 :
// Final Price: 195.98
// Excellent
// Input 2 :
// 10 158.50 2.5 2.5
// Output 2 :
// Final Price: 1545.38
// Average

#include<iostream>
#include<iomanip>
using namespace std;

class Plant{
    public:
    int count;
    float ppu,disper;
};

class Discount : public Plant {
    public:
    float dis;
    
    void calculateDiscount(){
        float val = disper/100;
        dis=(1-val)*ppu;
        // cout<<dis<<endl;
    }
};

class Nursery: public Discount{
    public:
    float rating;
    
    Nursery(){
        cin>>count>>ppu>>disper>>rating;
    }
    
    void printStatus(){
        
        float final=(count*dis);
        cout<<fixed<<setprecision(2);
        cout<<"Final Price: "<<final<<endl;
        
        if(rating>0&&rating<=2.5){
            cout<<"Average";
        }
        else{
            cout<<"Excellent";
        }
    }
};

int main(){
    Nursery n;
    n.calculateDiscount();
    n.printStatus();
}