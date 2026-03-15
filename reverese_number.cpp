#include<iostream>
using namespace std;


int isReverse(int x) {
    int rev = 0, rem ,store = x;

    if(x< 0) {
        return false;
    }
    while(x>0) {
        rem = x%10;
        rev = rev*10+rem;
        x = x / 10;
    }
    return rev;
}

int main() {
    int x;
    cout<<"enter n:";
    cin>>x;

    cout<<"reverse of x is: "<<isReverse(x)<<endl;
    return 0;
}

