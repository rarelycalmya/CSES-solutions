#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {
    long long n;
    cin >> n;
    while(n--) {
        long long i, j;
        cin >> i >> j;
        long long y = i * 10 + j;
        long long maxx = max(i, j);
        long long minn = min(i, j);
        if(i == j && i == 0) cout << "YES" << endl;
        else if(y%3 == 0 && (i!= 0 || j!= 0) && maxx <= minn*2) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}