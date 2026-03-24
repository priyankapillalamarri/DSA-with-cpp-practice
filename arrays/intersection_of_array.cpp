#include<iostream>
using namespace std;

int main() {
    int arr1[5] {1,2,3,4,5};
    int arr2[5] = {2,4,6,8,10};
    int sz = 5;

    for(int i=0; i<sz; i++) {
        for(int j=0; j<sz; j++) {
            if(arr1[i]==arr2[j]) {
                cout<<arr1[i]<<" ";
            }
        }
    }
    return 0;
}