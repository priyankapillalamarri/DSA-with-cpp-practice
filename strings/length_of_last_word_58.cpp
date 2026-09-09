#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int lengthOfLastWord(string s) {
        int n = s.length();
        string word = "";

        reverse(s.begin(), s.end());

        for(int i=0; i<n; i++) {
            while(s[i] == ' ') {
                i++;
            }
            while(i< n && s[i] != ' ') {
                word += s[i];
                i++;
            }
            if(s[i] == ' ') {
                break;
            }
        }
        return word.length();
    }

int main() {
    string s = "hi my name priya";
    int len = lengthOfLastWord(s);
    cout<<len;

}