#include<iostream>
#include<climits>
using namespace std;

int main() {
    int arr[7] = {3,-4,5,4,-1,7,-8};
    int n = 7;

    int curSum = 0;
    int maxSum = INT_MIN;

    int start=0, end =0, tempst=0;

    for(int i = 0; i<n ; i++) {
        curSum += arr[i];

        if(curSum>maxSum) {
            maxSum = curSum;
            start = tempst;
            end = i;
        }

        if(curSum<0) {
            curSum=0;
            tempst = i+1;
        }
    }

    cout<<"max sub array: "<<maxSum<<endl;
    
    cout<<"Sub array: ";
    for(int i=start; i<=end; i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}
