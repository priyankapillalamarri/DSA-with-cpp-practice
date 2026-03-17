#include<iostream>
#include<climits> 
#include<algorithm>
using namespace std;

int main() {
    int arr[5] = {1,2,3,4,5};
    int n = 5;

    int maxSum = INT_MIN;

    for(int st = 0; st<n ; st++) {
        int curSum = 0;

        for(int end = st; end<n; end++) {
            curSum += arr[end];
            maxSum = max(curSum,maxSum);
        }

    }
    cout<<"max sub array: "<<maxSum<<endl;
    return 0;
}