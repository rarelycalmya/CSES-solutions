#include<iostream>

using namespace std;

void weirdAlg(long long n) {
    if(n == 1) {
        cout << 1;
        return;
    }
    cout << n << " ";
    if(n%2 == 0) {
        weirdAlg(n/2);
    }
    else weirdAlg((n*3) + 1);
}

int main() {
    long long n;
    cin >> n;
    weirdAlg(n);
    return 0;
}