#include<iostream>
#include<vector>
using namespace std;

int majEle(vector<int>&nums ,int sz) {

    for(int val:nums) {
    int freq = 0;
        for(int ele:nums) {
            if(ele == val) {
                freq++;
            } 
        }
        if(freq>sz/2) {
            return val;
        }
    }
    return 0;
}

int main() {
    vector<int>nums = {2,2,1,1,2,1,2};
    int sz= nums.size();

    cout<<"majority element: "<<majEle(nums,sz);
    return 0;
}