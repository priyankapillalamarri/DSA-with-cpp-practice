#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"enter n: ";
    cin>>n;

    for(int i=1; i<=n; i++) {
        for(int j=i; j<=n; j++) {
            cout<<"1";
        }
        cout<<endl;
    }
    return 0;
}

/*output:
11111
1111
111
11
1
*/