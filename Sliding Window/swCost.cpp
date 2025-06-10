#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void balance(multiset<long long>&lo, multiset<long long>&hi) {
        if(hi.size() > lo.size()) {
            lo.insert(*hi.begin());
            hi.erase(hi.begin());
        }
        if(lo.size() - 1 > hi.size()) {
            hi.insert(*lo.rbegin());
            lo.erase(prev(lo.end()));
        }
    }
vector<int> medianSlidingWindow(vector<int>& nums, int k) {
    multiset<long long> lo, hi;
    vector<int> ans;

        for(int i = 0; i < (int)nums.size(); i++) {
            if(lo.empty() || nums[i] <= *lo.rbegin()) lo.insert(nums[i]);
            else hi.insert(nums[i]);
            balance(lo, hi);

            if(i >= k) {
                long long out = nums[i-k];
                if(out <= *lo.rbegin()) lo.erase(lo.find(out));
                else hi.erase(hi.find(out));
                balance(lo, hi);
            }

            if(i >= k-1) {
                // if(k % 2 == 1) ans.push_back((double)*lo.rbegin());
                // else ans.push_back(((double)*lo.rbegin() + (double)*hi.begin() )/2);
                ans.push_back((int)*lo.rbegin());
            }
        }
    return ans;
}

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> nums;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        nums.push_back(x);
    }

    vector<int> med;
    med = medianSlidingWindow(nums, k);
    vector<int> ans;
    for(int i = k; i < nums.size(); i++) {
        int temp = 0;
        
    }

    // for(auto i: ans) {
    //     cout << i << " ";
    // }

    return 0;
}