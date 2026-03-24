#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> nums = {1,2,3,4,5,6};

    for(int i=0; i<nums.size(); i++) {
        if(nums[i]%2==0) {
            cout<<nums[i]<<" ";
        }
    }
    return 0;
}