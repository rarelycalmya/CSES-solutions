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

    deque<pair<int, int>> q;
    long long ans;
    q.push_back({arr[0], 0});

        for(int i = 1; i < k; i++) {
            while(!q.empty() && q.back().first > arr[i]) {
                q.pop_back();
                // cout << q.front().first << endl;
            }
            q.push_back({arr[i], i});   
        }

        ans = ans ^ q.front().first;

        for(int i = k; i < arr.size(); i++) {
            while(q.size() && q.back().first > arr[i]) q.pop_back();
            q.push_back({arr[i], i});
            if(q.front().second <= i-k) q.pop_front();
            ans = ans ^ q.front().first;
        }
    cout << ans << endl;
    return 0;
}