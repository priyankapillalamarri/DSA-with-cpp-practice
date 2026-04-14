//Bubble Sort Example of time complexity O(n^2) 

#include<iostream>
using namespace std;

int main() {
    int n;

    cout<<"enter size: ";
    cin>>n;

    int arr[n];
    cout<<"enter elements: \n";
    
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    //Bubble sort
    for(int i=0; i<n; i++) {
        for(int j=0; j<n-i-1; j++) {

            if(arr[j]>arr[j+1]) {
                //swapping
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    cout<<"sorted array: \n";
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}