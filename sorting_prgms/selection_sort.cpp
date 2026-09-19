#include<iostream>
using namespace std;

void selection_sort(int arr[], int n) {
    for(int i=0; i<n-1; i++) {
        int smallestIndex = i;
        for(int j=i+1; j<n; j++) {
            if(arr[j] > arr[smallestIndex]) {
                smallestIndex = j;
            }
        }
        swap(arr[i], arr[smallestIndex]);
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

    selection_sort(arr,n);
    print_arr(arr,n);
    
    return 0;
}