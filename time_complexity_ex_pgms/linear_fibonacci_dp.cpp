// Simple program for Linear Time Complexity of O(n)
// Fibonacci series example using dynamic programming

#include<iostream>
using namespace std; 

int Fibonacci(int n) {
    int dp[100];

    dp[0] = 0;
    dp[1] = 1;

    for(int i=2; i<=n; i++) {
        dp[i] = dp[i-1] + dp[i-2];
    }
    return dp[n];
}

int main() {
    int fiboNum = 8;

    cout<<Fibonacci(fiboNum)<<endl;    
    return 0;
}