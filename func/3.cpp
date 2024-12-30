#include <iostream>
using namespace std;
int main(){
    double arr[] = {5.0, 6.0, 7.0, 8.0};
    double *p = (arr+2);
    cout << *p << endl;
    cout << arr << endl;
    cout << *(arr+3) << endl;
    cout << *(arr) << endl;
    cout << *arr+9 << endl;
    return 0;
}
