#include<iostream>
#include<vector>
using namespace std;

int recBinarySearch(vector<int>arr, int tar, int st, int end) {

    if(st<=end) {
        int mid = st + (end-st)/2;

        if(tar<arr[mid]) {
            return recBinarySearch(arr,tar,st,mid-1);
        } else if(tar > arr[mid]) {
            return recBinarySearch(arr,tar,mid+1,end);
        } else {
            return mid;
        }
    }
    return -1;
}

int main() {
    
    vector<int> arr1 = {1,2,3,4,5};
    int tar1 = 4;

    cout<<recBinarySearch(arr1,tar1,0,arr1.size()-1)<<endl;

    vector<int> arr2 = {1,2,3,4,5,6,7,8};
    int tar2 = 3;

    cout<<recBinarySearch(arr2,tar2,0,arr2.size()-1)<<endl;

    return 0;
}