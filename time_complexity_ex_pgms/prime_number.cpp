/* time complexity= O(root n) */

#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"enter n: ";
    cin>>n;

    bool prime= true;

    for(int i=2; i*i<=n; i++) {
        if(n%i == 0) {
            prime = false;
            break;
        }
    }

    if(prime) {
        cout<<"prime number"<<endl;
    }
    else {
        cout<<"non-prime number"<<endl;
    }
    return 0;
}