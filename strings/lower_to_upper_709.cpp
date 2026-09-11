#include<iostream>
#include<string>
#include<algorithm>
using namespace std;


string toLowerCase(string s) {
        
        for(int i = 0; i < s.length(); i++) {
            if(s[i] >= 'A' && s[i] <= 'Z') {
                s[i] += 32;
            } 
        }
        return s;
}

int main() {
    string s = "Hello Priya";
    cout<<toLowerCase(s);
    return 0;
}