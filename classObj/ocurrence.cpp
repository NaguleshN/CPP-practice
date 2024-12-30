// You are using GCC
#include<iostream>
#include<string>
using namespace std;


class Occurrence{
    string word;
    
    public:
    
    void setString(string s){
        word=s;
    }
    
    void getOccurence(char ch){
        int len = word.length();
        int count=0;
        for(int i=0; i<len;i++){
            if(word[i]==ch){
                count++;
                // cout<<count<<ch<<endl;
            }
        }
        cout<<count;
    }
};

int main(){
    string word;
    cin>>word;
    
    char ch;
    cin>>ch;
    
    Occurrence o;
    o.setString(word);
    o.getOccurence(ch);
    
}