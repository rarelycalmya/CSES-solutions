#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {
    long long t;
    cin >> t;

    while(t--) {
        long long i, j;
        cin >> i >> j;
        long long diff = 0;
        long long diag = 0;
        if(i >= j) {
            diff = i -j;
            diag = ((i*i) + ((i-1) * (i-1)) + 1) / 2;
            if(i % 2 == 0) {
                cout << diag + diff << endl;
            }
            else {
                cout << diag - diff << endl;
            }
        }
        else if(j > i) {
            diff = j -i;
            diag = ((j*j) + ((j-1) * (j-1)) + 1) / 2;
            if(j % 2 == 0) {
                cout << diag - diff << endl;
            }
            else {
                cout << diag + diff << endl;
            }
        }
    }
    
}