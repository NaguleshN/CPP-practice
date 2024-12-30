// total marks above the first 

// Input 1 :
// 4
// 90 70 80 70 90
// 90 80 90 90 100
// 60 70 80 90 40
// 80 60 70 80 50
// Output 1 :
// 1
class Student{
    
    int sum=0;
    public:
    void input(){
        for(int i=0;i<5;i++){
            int n;
            cin>>n;
            sum+=n;
        }
    }
    
    static int countHigherScores(Student *s, int n){
        int count=0;
        for(int i=1;i<n;i++){
            // cout<<s[i].sum<<" "<<s[0].sum<<endl;
            if(s[i].sum>s[0].sum){
                count++;
            }
            
        }
        return count;
    }
};
int main() {
    int n;
    cin >> n;

    // Dynamically allocate an array of Student objects
    Student *s = new Student[n];

    // Input scores for all students
    for (int i = 0; i < n; i++) {
        s[i].input();
    }

    // Call the static method to count how many students scored higher than Kristen
    int result = Student::countHigherScores(s, n);

    // Output the result
    cout << result << endl;

    // Free dynamically allocated memory
    delete[] s;

    return 0;
}
