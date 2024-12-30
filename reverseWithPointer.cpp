// You are using GCC
#include<iostream>
#include<string>
#include<cstring>
using namespace std;

void reverse(char *str,char *rev,int index,int length){
    // int length= str.length();
    if(index==length){
        rev[index]='\0';
        return;
    }
    
    rev[length-index-1]=str[index];
    reverse(str,rev,index+1,length);
    
}

int main(){
    string word;
    cin>>word;
    int len=word.length();
    char str[len+1], rev[len+1];
    strcpy(str,word.c_str());
    reverse(str,rev,0,len);
    cout<<rev;
}