//majority element by Moore's voting algorithm

#include<iostream>
#include<vector>
using namespace std;

int majorEle(vector<int>& nums, int sz) {

    int freq = 0, ans = 0;

    for(int i=0; i<sz; i++) {
        if(freq == 0) {
            ans = nums[i];
        }
        if(ans == nums[i]) {
            freq++;
        } else {
            freq--;
        }

    }
    return ans;
}


int main() {
    vector<int> nums = {1,2,2,1,1};
    int sz = nums.size();    

    cout<<"major element: "<<majorEle(nums,sz);

    return 0;
}
