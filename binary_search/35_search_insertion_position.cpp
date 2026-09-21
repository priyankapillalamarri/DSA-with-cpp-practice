#include<iostream>
#include<vector>
using namespace std;

int searchInsert(vector<int>& nums, int target) {
    int st=0 , end=nums.size()-1;

    while(st <= end) {
        int mid = (st+end)/2;

        if(nums[mid] == target) {
            return mid;
        } else if(target > nums[mid]) {
            st = mid + 1;
        } else if(target < nums[mid]) {
            end = mid - 1;
        } 
    }    
    return st;
}

int main() {
    vector<int> nums = {1,3,4,8};
    int target = 6;
    cout<<searchInsert(nums, target);
}