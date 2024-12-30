// Input 1 :
// 7
// Output 1 :
// Fibonacci number at position 7: 13
// Odd, Digit Sum: 4

#include <iostream>
using namespace std;

class FibonacciCalculator {
public:
    static long long calculateFibonacci(int n) {
        if (n <= 0) return 0;
        if (n == 1) return 1;

        long long fibNMinus1 = 1;
        long long fibNMinus2 = 0;
        long long fibN = 0;
        // You are using GCC


        for (int i = 2; i <= n; i++) {
            fibN = fibNMinus1 + fibNMinus2;
            fibNMinus2 = fibNMinus1;
            fibNMinus1 = fibN;
        }

        return fibN;
    }

    static string checkEvenOddAndSumDigits(long long number) {
        bool isEven = (number % 2 == 0);
        long long digitSum = calculateDigitSum(number);

        string result = isEven ? "Even" : "Odd";
        result += ", Digit Sum: " + to_string(digitSum);

        return result;
    }

private:
    static long long calculateDigitSum(long long number) {
        long long sum = 0;
        while (number != 0) {
            sum += number % 10;
            number /= 10;
        }
        return sum;
    }
};
int main() {
    int n;
    cin >> n;  // Read Fibonacci position
    long long fibonacciNumber = FibonacciCalculator::calculateFibonacci(n);
    
    cout << "Fibonacci number at position " << n << ": " << fibonacciNumber << endl;
    cout << FibonacciCalculator::checkEvenOddAndSumDigits(fibonacciNumber) << endl;

    return 0;
}