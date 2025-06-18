#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {
    long long n;
    cin >> n;
    vector<long long> arr;
    for(long long i = 0; i < n; i++) {
        long long x;
        cin >> x;
        arr.push_back(x);
    }
    
    long long total = INT_MIN;
    long long tsum = 0;

    for(auto i: arr) {
        tsum += i;
        total = max(total, tsum);
        if(tsum < 0) tsum = 0;
    }
    
    cout << total << endl;
}