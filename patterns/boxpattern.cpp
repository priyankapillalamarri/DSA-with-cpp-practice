#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"enter n: ";
    cin>>n;
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n; j++) {
            if(i==1) {
                cout<<"*";
            }
            else if(i==n) {
                cout<<"*";
            }
            else if(j==1) {
                cout<<"*";
            }
            else if(j==n) {
                cout<<"*";
            }
            else {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}