#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"enter n: ";
    cin>>n;

    for(int i=1; i<=n;i++) {
        if(i==1 || i==n) {
            for(int m=1; m<=n; m++) {
                cout<<"*";
            }
        }
        else {
            cout<<"*";
            if(i>=1) {
                for(int k=1; k<n-1; k++) {
                cout<<" ";
            }
            cout<<"*";
            }
        }
        cout<<endl;
    }
    return 0;
}

/*
Output for n=4 {
****
*  *
*  *
****
}
    */