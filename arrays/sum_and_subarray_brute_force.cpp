#include<iostream>
using namespace std;

int main() {

    int arr[7] = {3,-4,5,4,-1,7,-8};
    int n = 7;

    int maxSum = INT_MIN;
    int start=0, end=0;

    for(int st = 0; st < n; st++) {
        for(int ed = st; ed < n; ed++) {
            int curSum = 0;
            for(int k = st; k <= ed; k++) {
                curSum += arr[k];
            }

            if(curSum > maxSum) {
                maxSum = curSum;
                start = st;
                end = ed;
            }
        }
    }

    cout << "Max Sum = " << maxSum<<endl;

    cout<<"Sub array: ";
    for(int i = start; i <= end; i++) {
        cout << arr[i] << " ";
    } 
    return 0;
}
