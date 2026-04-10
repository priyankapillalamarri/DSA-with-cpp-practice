#include<iostream>
#include<vector>
using namespace std;

int countResponseTimeRegressions(vector<int> responseTimes) {
    int n = responseTimes.size();
    int count = 0;
    
    if(n == 0) {
        return 0;
    }
    
    double sum = responseTimes[0];
    
    for(int i=1; i<n; i++) {
        double avg = (double)sum/i;
    
        if(responseTimes[i]>avg) {
            count++;
        }
    
        sum += responseTimes[i];
    }
    return count;
}

int main() {
    vector<int>responseTimes = {100,200,150,300};

    int result = countResponseTimeRegressions(responseTimes);
    cout<<"count: "<<result<<" ";

}