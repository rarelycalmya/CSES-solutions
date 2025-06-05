#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {
    int n, x;
    int ans = 0;

    cin >> n >> x;
    vector<int> a;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        a.push_back(x);
    }

    sort(a.begin(), a.end());

    int l = 0, r = a.size()-1;

    while(l <= r) {
        if(a[l] + a[r] > x) {
            r--;
            ans++;
        }
        else if (a[l] + a[r] <= x) {
            l++;
            r--;
            ans++;
        }
    }

    cout << ans << endl;
    return 0;
}
