#include <iostream>
#include <string>
using namespace std;

class Factorial {
public:
    // Function to calculate factorial of a number
    string calculateFactorial(int n) {
        string result = "1";  // Starting with 1 as the factorial base
        for (int i = 2; i <= n; i++) {
            result = multiply(result, i);
        }
        return result;
    }

// You are using GCC
int calculateDigitSum(string fact){
    int sum=0;
    int len=fact.length();
    for(int i=0;i<len;i++){
        sum += int(fact[i]-'0');
        // cout<<sum<<" ";
        // sum+=a;
    }
    return sum;
    
}

string multiply(string result, int num){
    string final= "";
    int carry =0 ;
    
    for (int i=result.length()-1;i>=0;i--){
        int product= (result[i]-'0')*num+carry;
        final=char(product%10 +'0')+final;
        carry=product/10;
    }
    
    while(carry>0){
        final = char(carry%10+'0')+final;
        carry/=10;
    }    
    return final;
}

};

int main() {
    int n;
    cin >> n;

    Factorial factorial;
    string fact = factorial.calculateFactorial(n);  // Get the factorial as a string
    int digitSum = factorial.calculateDigitSum(fact);  // Get the sum of digits

    cout << "Factorial of " << n << " is: " << fact << endl;
    cout << "Sum of its digits is: " << digitSum << endl;

    return 0;
}