//majority element by sorting(optimized approach)

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int majorEle(vector<int>& nums, int sz) {

    sort(nums.begin(), nums.end());

    int freq = 1, ans = nums[0];

    for(int i=1; i<sz; i++) {
        if(nums[i]==nums[i-1]) {
            freq++;
        } else {
            freq = 1;
            ans = nums[i];
        }

        if(freq > sz/2) {
            return ans;
        }

    }
    return 0;
}


int main() {
    vector<int> nums = {1,2,2,1,1};
    int sz = nums.size();    

    cout<<"major element: "<<majorEle(nums,sz);

    return 0;
}