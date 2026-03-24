#include<iostream>
#include<vector>
using namespace std;

int majorEle(vector<int>& nums, int sz) {

    for(int val:nums) {
        int freq = 0;

        for(int ele:nums) {
            if(val == ele) {
                freq++;
            }
        }

        if(freq > sz/2) {
            return val;
        }
    }
    return 0;
}

int main() {
    vector<int> nums = {2,2,1,1,1,2,2};
    int sz = nums.size();    

    cout<<"major element: "<<majorEle(nums,sz);

    return 0;
}