//leetcode problem 2965
//finding repeated and missing numbers in a 2D integer matrix

#include<iostream>
#include<vector>
using namespace std;

    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();

        vector<int> freq(n*n+1,0);
        
        int repeated = -1;
        int missing = -1;

        for(int i=0;i<n;i++) {
            for(int j=0;j<n;j++) {
                int num = grid[i][j];

                freq[num]++;

                if(freq[num] == 2) {
                    repeated = num;
                }
            }
        }
        for(int i=1;i<=n*n;i++) {
            if(freq[i]==0) {
                missing = i;
                break;
            }
        }
        return {repeated,missing};
    };

int main() {
    vector<vector<int>>grid = {
        {1,3},
        {2,2}
    };

    vector<int>ans = findMissingAndRepeatedValues(grid);
    cout<<"repeated and missing: "<<"{"<<ans[0]<<","<<ans[1]<<"}";

    return 0;
}

