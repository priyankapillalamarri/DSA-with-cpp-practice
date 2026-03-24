#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int majEle(vector<int>& nums, int sz) {

    sort(nums.begin(), nums.end());
    int freq = 1, ans = nums[0];

    for(int i:nums) {
        if(nums[i]==nums[i-1]) {
            freq++;
        } else {
            freq = 1;
            ans = nums[i];
        }

        if(freq>sz/2) {
            return ans;
        }

    }
    return 0;
}

int main() {
    vector<int> nums = {1,1,2,2,1};
    int sz = nums.size();

    cout<<"majority element: "<<majEle(nums,sz);
    return 0;
}
