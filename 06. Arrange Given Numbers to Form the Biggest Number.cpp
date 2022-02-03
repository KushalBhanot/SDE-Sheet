#include <bits/stdc++.h>
using namespace std;

bool comp(string x, string y) {
    string xy = x.append(y);
    string yx = y.append(x);
    
    return xy.compare(yx) > 0 ? true : false;
}

void printLargest(vector<string>& nums) {
    sort(nums.begin(), nums.end(), comp);
    
    for(auto it: nums)
        cout << it;
}

int main() {
    int n; cin >> n;
    
    vector<string> nums(n);
    for(int i = 0; i < n; i++) cin >> nums[i];
    
    printLargest(nums);
}
