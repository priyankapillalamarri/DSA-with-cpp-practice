#include<iostream>
using namespace std;

void changeArr(int arr[], int size) {
    for(int i=0; i<size; i++) {
        arr[i] = 2*arr[i];
        cout<<arr[i]<<" ";
    }
}

int main() {
    int arr[] = {2,5,6};
    int size = 3;
    
    changeArr(arr,size);
    cout<<endl;
    
    for(int i=0; i<size; i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}
