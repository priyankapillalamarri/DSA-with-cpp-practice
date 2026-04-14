// Simple program for Constant Time Complexity of O(1)

#include<iostream>
using namespace std; 

int main() {
    int n;
    cout<<"enter n: ";
    cin>>n;

    int ans = n*(n+1) / 2;
    cout<<ans;
    return 0;
}