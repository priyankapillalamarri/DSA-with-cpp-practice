#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

string defangIPaddr(string address) {
        int n = address.length();
        string ans = "";

        for(int i = 0; i < n; i++) {
            if(address[i] == '.') {
                ans += "[.]";
            } else {
                ans += address[i];
            }
        }
        return ans;
}

int main() {
    string addr = "1.1.1.1";
    cout<<defangIPaddr(addr);
    return 0;
}