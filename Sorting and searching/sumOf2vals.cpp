#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {
    long long n, x;
    cin >> n >> x;
    vector<long long> arr;
    for(long long i = 0; i < n; i++) {
        long long t;
        cin >> t;
        arr.push_back(t);
    }

    map<long long, long long> mp;
    bool ans = false;
    for(long long i = 0; i < n; i++) {
        long long diff = x-arr[i];
        if(mp.find(diff) != mp.end()) {
            cout << mp[diff] + 1 << " " << i + 1 << endl;
            ans = true;
            break;
        }
        else {
            mp[arr[i]] = i;
        }
    }

    if(!ans) cout << "IMPOSSIBLE" << endl; 

}