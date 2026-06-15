#include<iostream>
#include<algorithm>
#include<vector> 
using namespace std;

int main() {
    vector<int> waterHeight = {1,8,6,2,5,4,8,3,7};
    int maxWater = 0;
    int lp=0, rp= waterHeight.size()-1;

    while(lp<rp) {
        int width = rp-lp;
        int height = min(waterHeight[rp], waterHeight[lp]);
            
        int currWater = width*height;
        maxWater = max(maxWater, currWater);

        waterHeight[lp] < waterHeight[rp] ? lp++ : rp--;
    }
    
    cout<<maxWater<<endl;
    return 0;
}