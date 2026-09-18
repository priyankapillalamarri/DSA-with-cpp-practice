#include<iostream>
using namespace std;

void bubble_sort(int arr[], int n) {
    for(int i=0; i<n; i++) {
        bool isSwap = false;
        for(int j=0; j<n; j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                isSwap = true;
            }
        }
        if(!isSwap) {
            return;
        }
    }
}

void print_arr(int arr[], int n) {
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main() {
    int arr[] ={2,5,3,4,1};
    int n = 5;

    bubble_sort(arr,n);
    print_arr(arr,n);
    
    return 0;
}