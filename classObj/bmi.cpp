// You are using GCC
class BMI{
    public:
    char bmi(int n,float m){
        double b=(n/(m*m));
        // cout<<m<<" "<<n;
        if(b<18.5)
        return 'U';
        else if(b>=18.5 &&b<25.0)
        return 'N';
        else if (b>=25.0 && b<30.0)
        return 'H';
        else
        return 'O';
    }
};

int main() {
    int n;           
    cin >> n;       
    float m;         
    cin >> m;   
    BMI t;          
    char grade = t.bmi(n, m);
    cout << grade << endl;

    return 0;
}