// Create an array of objects for the above class. In the main class, calculate and print the following.

// Total marks obtained by each student.
// The highest mark in each subject with the roll number of the student who scored it.
// The student who obtained the highest total mark

// Input 1 :
// 5
// 1 98 85 76
// 2 85 74 65
// 3 85 96 75
// 4 52 65 79
// 5 52 75 65
// Output 1 :
// 259
// 224
// 256
// 196
// 192
// 1 98
// 3 96
// 4 79
// 1 259

#include<iostream>
using namespace std;

class Student{
    int rollno;
    int mark1;
    int mark2;
    int mark3;
    int total;
    
    public:
    
    void setRno(int no){
        rollno=no;
    }
    
    void setMark1(int mark){
        mark1=mark;
    }
    
    void setMark2(int mark){
        mark2=mark;
    }
    
    void setMark3(int mark){
        mark3=mark;
    }
    
    int totalMarks(){
        int total=mark1+mark2+mark3;
        return total;
    }
    static void findMaxMarks(Student *s,int n){
        int r1=0,r2=0,r3=0;
        int m1=0,m2=0,m3=0;
        for(int i=0;i<n;i++){
            if(s[i].mark1>m1){
                m1=s[i].mark1;
                r1=s[i].rollno;
            }
            if(s[i].mark2>m2){
                m2=s[i].mark2;
                r2=s[i].rollno;
            }
            if(s[i].mark3>m3){
                m3=s[i].mark3;
                r3=s[i].rollno;
            }
        }
        cout<<r1<<" "<<m1<<endl;
        cout<<r2<<" "<<m2<<endl;
        cout<<r3<<" "<<m3<<endl;
    }
   static void findMaxTotalMarks(Student *s,int n){
       int max=0,roll=0;
       for(int i=0;i<n;i++){
           int total=s[i].totalMarks();
           if(total > max){
               max = total;
               roll = s[i].rollno;
           }
       }
       cout<<roll<<" "<<max;
   } 
};

int main() {
    int n;
    cin >> n;
    Student s[n];  
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        s[i].setRno(t);
        cin >> t;
        s[i].setMark1(t);
        cin >> t;
        s[i].setMark2(t);
        cin >> t;
        s[i].setMark3(t);
    }
    for (int i = 0; i < n; i++) {
        cout << s[i].totalMarks() << endl;
    }
    Student::findMaxMarks(s, n);
    Student::findMaxTotalMarks(s, n);

    return 0;
}