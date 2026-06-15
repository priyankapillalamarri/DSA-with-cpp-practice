#include<iostream>
#include<algorithm>
#include<vector> 
using namespace std;

int main() {
    vector<int> waterHeight = {1,8,6,2,5,4,8,3,7};
    int maxWater = 0;
    int n = waterHeight.size();

    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {
            int width = j-i;
            int height = min(waterHeight[i], waterHeight[j]);
            
            int currWater = width*height;
            maxWater = max(maxWater, currWater);

        }
    }
    
    cout<<maxWater<<endl;
    return 0;
}