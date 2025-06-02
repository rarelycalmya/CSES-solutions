#include<iostream>

using namespace std;

int main() {
    string s;
    cin >> s;
    int l = 0;
    int r = 0;
    int maxLen = 1;
    int temp = 0;
    while(r < s.size()) {
        if(s[l] == s[r]) r++;
        else {
            maxLen = max(maxLen, r-l);
            l = r;
        }
    }
    maxLen = max(maxLen, r-l);
    cout << maxLen << endl;
    return 0;
}