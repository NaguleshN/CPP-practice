// You are using GCC
#include<iostream>
using namespace std;

class CharacterChecker{
    
    public:
    void checkAlphabetType(char ch){
        cout<<ch<<": ";
        if(isalpha(ch)){
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
                cout<<"vowel";
            }
            else{
                cout<<"consonant";
            }
        }
        else{
            cout<<"not an alphabet";
        }
        
    }
};

int main(){
    char ch;
    cin>>ch;
    CharacterChecker c;
    c.checkAlphabetType(ch);
}