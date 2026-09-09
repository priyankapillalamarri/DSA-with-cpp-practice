#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main() {
    string s = "Hello World!";
        int start = 0, end = s.size()-1;

        while(start < end) {
            swap(s[start++], s[end--]);
        }
        cout<<s;
}
