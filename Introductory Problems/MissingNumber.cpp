#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    set<int> vals;
    for(int i= 1; i <= n; i++) {
        vals.insert(i);
    }
    for(int i = 1; i < n; i++) {
        int val; 
        cin >> val;
        vals.erase(val);
    }
    for(auto i: vals) {
        cout << i << endl;
    }
    return 0;
}
