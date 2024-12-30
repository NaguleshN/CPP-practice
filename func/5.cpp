// #include <iostream> 
// using namespace std; 
// int main() { 
//     int a = 10, *pa, &ra; 
//     pa = &a; 
//     ra = a; 
//     cout << "a=" << ra; 
//     return 0; 
// } 

// #include <iostream>
// using namespace std;  
// int main() 
// {
//   const int i = 20;
//   const int* const ptr = &i;
//   (*ptr)++;
//   int j = 15;
//   ptr = &j;
//   cout << i;
//   return 0;
// }

// #include <iostream>
// using namespace std;
// long factorial (long a){
//     if (a > 1)
//         return (a * factorial (a - 1));
//     else
//         return 1;
// }

// int main (){
//     long num = 3;
//     cout << num << "! = " << factorial ( num );
//     return 0;
// }


// #include <iostream>
// using namespace std;
// int funcstatic(int){
//     int sum = 0;
//     sum = sum + 10;
//     return sum;
// }
// int main()
// {
//     int r = 5, s;
//     s = funcstatic(r);
//     cout << s << endl;
//     return 0;
// }

// #include <iostream>
// #include <math.h>
// using namespace std;
// int main (){
//     cout <<  fabs (-10.6) ;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// void addprint(){
//     static int s = 1;
//     s++;
//     cout << s;
// }
// int main(){
//     addprint();
//     addprint();
//     addprint();
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int demo(int x){
//     if(x>10)
//         return x;
//     else
//         return -1;
// }
// int main (){
//     int t = demo(15);
//     cout << t;
//     return 0;
// }

// #include < iostream >
// using namespace std;
// void main()
// void main(){
//     cout << "Hi ";
// }

// int main(){
//     main();
//     return 0;
// }


#include<iostream>
using namespace std;
int something(int number) { 
    if(number <= 0) 
        return 1;                             
    else 
        return number * something(number-1);   
} 
int main()
{
    int val= something(4);
    cout<<val;
    return 0;
}


