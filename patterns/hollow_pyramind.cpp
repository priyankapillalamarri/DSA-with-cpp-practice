#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"enter n: ";
    cin>>n;

    for(int i=1; i<=n; i++) {
        for(int j=i; j<=n-1; j++) {
            cout<<" ";
        }
        if(i==1) {
            cout<<"*";
        }
        else if(i==n) {
            for(int l=1; l<=2*n-1; l++) {
                cout<<"*";
            }
        }
        else {
            cout<<"*";
            for(int k=1; k<=2*i-3; k++) {
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}

/*
output for n=4 {
   *
  * *
 *   *
*******
}
*/