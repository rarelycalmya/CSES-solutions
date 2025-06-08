#include<iostream>
#include<bits/stdc++.h>
#include<cmath>

using namespace std;

int main() {
    int n;
    cin >> n;
    int half = (n + 1)/2;
    if(half % 2 != 0) cout << "NO";
    else {
        vector<long long> a;
        vector<long long> b;
        long long sumA = 0, sumB = 0;
        for(int i = n; i > 0; i--) {
            if(sumA < sumB) {
                sumA += i;
                a.push_back(i);
            }
            else {
                sumB += i;
                b.push_back(i);
            }
        }

        cout << "YES" << endl;
        cout << b.size() << endl;
        for(auto i : b) cout << i << " ";
        cout << "\n" << a.size() << endl;
        for(auto i: a) cout << i << " ";
    }
    
}