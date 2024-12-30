#include <iostream> 
using namespace std; 
int* reverse(int*); 
int main() {   
    int x[5] = { 1, 2, 3, 4, 5 };   
    int i, *p;   
    p = reverse(x);   
    for (i = 0; i < 5; i++)     
        cout << *(p + i) << " ";     
    return 0; 
}  
int* reverse(int* p) {
    int i;   
    for (i = 0; i < 2; i++){     
        int temp = *(p + i);     
        *(p + i) = *(p + 4 - i);     
        *(p + 4 - i) = temp;   
    }   
    return p; 
}