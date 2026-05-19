#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"enter n: ";
    cin>>n;

    int mid = n/2 + 1;

    for(int i = 1; i<=mid; i++) {
        for(int j=i; j<mid; j++) {
            cout<<" ";
        }
        for(int k=1; k<=2*i-1; k++) {
            cout<<"*";
        }
        cout<<endl;
    }

    for(int i=mid-1; i>=1; i--) {
        for(int j=mid; j>i; j--) {
            cout<<" ";
        }
        for(int k=1; k<=2*i-1; k++) {
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}