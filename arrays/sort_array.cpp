#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void sortArray(vector<int>& v) {

    sort(v.begin(), v.end());

    cout << "Sorted array: ";

    for(int x : v) {
        cout << x << " ";
    }
}


int main() {

    vector<int> nums = {5,2,8,1,3};

    sortArray(nums);

    return 0;
}