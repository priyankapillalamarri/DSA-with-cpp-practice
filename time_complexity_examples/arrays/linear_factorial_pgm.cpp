//Factorial of Number Example of Time Complexity of O(n)

#include<iostream>
using namespace std;

int factofNum(int n) {
    int fact = 1;
    for(int i=1; i<=n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num = 5;
    cout<<factofNum(num)<<endl;
    return 0;
}
