#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {
    int n, m ,k;
    cin >> n >> m >> k;
    vector<int> a;
    vector<int> b;

    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        a.push_back(x);
    }
    for(int i = 0; i < m; i++) {
        int x;
        cin >> x;
        b.push_back(x);
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int pta = 0, ptb = 0;
    int ans = 0;

    while(pta < n && ptb < m) {
        if(a[pta] - b[ptb] > k) ptb++;
        else if(b[ptb] - a[pta] > k) pta++;
        else {
            pta++;
            ptb++;
            ans++;
        }
    }

    cout << ans << endl;
    return 0;
}
