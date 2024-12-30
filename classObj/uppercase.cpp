// You are using GCC
class Person{
    
    private:
    string name;
    int age;
    string sex;
    
    public:
    
    void setDetails(string n ,int a, string s){
        name=n;
        age=a;
        sex=s;
    }
    
    string upper(string n){
        string ch="";
        for (char c:n){
            ch+=toupper(c);
        }
        return ch;
    }
    
    string getDetailsInUppercase(){
        string output;
        
        output=upper(name);
        output+=" ";
        output+=to_string(age);
        output+=" ";
        output+=upper(sex);
        // cout<<output;
        return output;
    }
};