

class ItemType{
    private:
        string name;
        double deposit;
        double costPerDay;
    
    
    public:
    // void display(){
        
    // }
    
    void setName(string n){
        name=n;
    }
    void setDeposit(double d){
        deposit=d;
    }
    
    void setCostPerDay(double cost){
        costPerDay=cost;
    }
    
    string getName(){
        return name;
    }
    
    double getDeposit(){
        return deposit;
    }
    
    double getCostPerDay(){
        return costPerDay;
    }
};

int main() {
    ItemType obj1;
    string name;
    cin >> name;
    double deposit;
    cin >> deposit;
    double costPerDay;
    cin >> costPerDay;

    obj1.setName(name);
    obj1.setDeposit(deposit);
    obj1.setCostPerDay(costPerDay);
    cout << "Name : " << obj1.getName() << endl;
    cout << "Deposit Amount : " << obj1.getDeposit() << endl;
    cout << "Cost per day : " << obj1.getCostPerDay() << endl;

    return 0;
}
