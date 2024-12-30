// Input 2 :
// 10
// A simple cipher.
// Output 2 :
// Encrypted text: K cswzvo mszrob.

// Input format :
// The first line of input consists of an integer value representing the encryption key.

// The second line consists of the message to be encrypted.

// Output format :
// The output prints the encrypted message, with letters shifted according to the key. Non-letter characters remain unchanged.

#include <iostream>
#include <string>
using namespace std;

class Cipher {
private:
    string input;
    int key;

public:
    // Constructor
    Cipher() {}

void inputDetails(){
      cin>>key;
      cin.ignore();
      getline(cin,input);
}
string encrypt(){
      string s="";
      char ch;
      int len = input.length();
      
      for(int i=0;i<len;i++){
          
          if(isalpha(input[i]))
          {
              if(islower(input[i])){
                  ch=char(((input[i]+key-'a')%26)+'a');
              }
              else{
                  ch=char(((input[i]+key-'A')%26)+'A');
                  
              }
             s+=ch;
          }
          else{
              s+=input[i];
          }
          
      }
      return s;
  }
  };

  int main() {
    Cipher cipher;
    cipher.inputDetails();  // Input the key and the text

    string encrypted = cipher.encrypt();  // Encrypt the text

    cout << "Encrypted text: " << encrypted << endl;  // Output the encrypted text
    return 0;
}