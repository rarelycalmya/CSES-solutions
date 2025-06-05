#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {
    long long n, k;
    cin >> n >> k;
    long long x, a, b, c;
    cin >> x >> a >> b >> c;
    vector<long long> arr;
    arr.push_back(x);

    for(long long i = 1; i< n; i++) {
        arr.push_back((a*arr[i-1] + b) %c);
    }

    deque<int> q;
    for(int i = 0; i < k; i++){
        while(q.size() && arr[q.back() > a[i]])
    }

    return 0;
}