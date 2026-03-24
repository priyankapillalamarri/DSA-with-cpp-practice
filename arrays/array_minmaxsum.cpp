#include<iostream>
using namespace std;

int minfunc(int arr[], int sz) {
    int smallest = arr[0];
    for(int i=0; i<sz; i++) {
        smallest = min(arr[i],smallest);
    }
    return smallest;
}

int maxfunc(int arr[], int sz) {
    int largest = arr[0];
    for(int i=0; i<sz; i++) {
        largest = max(arr[i],largest);
    }
    return largest;
}

int main() {
    int arr[5] = { 3, 5, 1, 4, 6};
    int sz = 5;

    cout<<"smallest no: "<<minfunc(arr,sz)<<endl;
    cout<<"largest no: "<<maxfunc(arr,sz)<<endl;

    return 0;
}