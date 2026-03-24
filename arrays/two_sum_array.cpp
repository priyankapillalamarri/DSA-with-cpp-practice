#include<iostream>
using namespace std;

int main() {
    int arr[] = {9,10,4,5};
    int sz = 4;
    int target = 13;

    for(int i=0; i<sz; i++) {
        for(int j=i+1; j<sz; j++) {
            
            if(arr[i]+arr[j] == target) {
                cout<<arr[i]<<" and "<<arr[j]<<" = "<<target<<endl;
            }
        }
    }
    return 0;
}
