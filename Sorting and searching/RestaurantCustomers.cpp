#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<pair<int, int>> arr;

    for(int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        arr.push_back({a, +1});
        arr.push_back({b, -1});
    }

    sort(arr.begin(), arr.end());

    int ans = 0;
    int temp = 0;
    for(auto i: arr) {
        temp += i.second;
        ans = max(ans, temp);
    }

    cout << ans << endl;
    return 0;

}