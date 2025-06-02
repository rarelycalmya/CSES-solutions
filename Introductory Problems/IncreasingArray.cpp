#include<iostream>
#include<bits/stdc++.h>

using namespace std;

long long IncArray(int n, vector<long long> a) {
    long long total = 0;
    for(int i = 1; i < n; i++) {
        if(a[i-1] >  a[i]) {
            total += a[i-1] - a[i];
            a[i] = a[i-1];
        }
    }
    return total;
}

int main() {
    int n;
    cin >> n;
    vector<long long> a;
    for(int i = 0; i <n; i++) {
        long long x;
        cin >> x;
        a.push_back(x);
    }
    cout << IncArray(n, a) << endl;
}