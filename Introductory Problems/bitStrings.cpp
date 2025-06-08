#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {
    const unsigned int M = 1000000007;
    int n;
    cin >> n;
    int ans = 2;
    while (n-- >1)
    {
        ans = (ans * 2) % M;
    }
    cout << ans << endl;
    
}