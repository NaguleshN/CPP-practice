// Write a program that accomplishes the following:



// Create a file named "sample.txt" and write the initial content: "Hi hello!, I am \n".
// Prompt the user to enter a string.
// Append the user input to the existing content of "sample.txt."
// Display the entire content of "sample.txt" after the append operation.

#include<iostream>
#include<fstream>
using namespace std;

int main(){
    
    fstream file;
    file.open("sample.txt",ios::out);
    file<<"Hi hello!, I am \n";
    file.close();
    string str;
    cin>>str;
    file.open("sample.txt",ios::app);
    file<<str;
    file.close();
    
    file.open("sample.txt",ios::in);
    string str1;
    cout<<"Data appended successfully"<<endl;
    while(!file.eof()){
        getline(file,str1);
        cout<<str1;
    }
}