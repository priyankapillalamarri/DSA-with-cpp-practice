#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"enter n: ";
    cin>>n;

    for(int i=1; i<=n; i++) {
        for(int j=i; j<n; j++) {
            cout<<" ";
        }
        for(int k=1; k<=2*i-1; k++) {
            cout<<"*";
        }
        cout<<endl;
    }

    for(int a=n-1; a>=1; a--) {
        for(int b=n; b>a; b--) {
            cout<<" ";
        }
        for(int c=1; c<=2*a-1; c++) {
            cout<<"*";
        }
        cout<<endl;
    }
    
    return 0;
}