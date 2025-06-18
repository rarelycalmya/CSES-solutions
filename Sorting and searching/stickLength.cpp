#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {
    long long n;
    cin >> n;
    vector<long long> arr;
    for(long long i =0; i < n; i++ ){
        long long x;
        cin >> x;
        arr.push_back(x);
    }

    sort(arr.begin(), arr.end());

    long long med = arr[n/2];
    long long cost = 0;

    for(auto i: arr) {
        cost += abs(med - i);
    }

    cout << cost << endl;
}