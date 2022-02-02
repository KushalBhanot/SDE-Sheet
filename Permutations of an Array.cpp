#include<bits/stdc++.h>
using namespace std;

void recurPermute(int index, vector<int>& nums, vector<vector<int>>& ans) {
    if(index == nums.size()) {
        ans.push_back(nums);
        return;
    }
    
    for(int i = index; i < nums.size(); i++) {
        swap(nums[index], nums[i]);
        recurPermute(index + 1, nums, ans);
        // backtrack
        swap(nums[index], nums[i]);
    }
}

int main() {
    int n; 
    cin >> n;
    
    vector<int> nums(n);
    for(int i = 0; i < n; i++)  cin >> nums[i];
    
    vector<vector<int>> ans;
    recurPermute(0, nums, ans);
    
    for (int i = 0; i < ans.size(); i++) {
        for (int j = 0; j < ans[i].size(); j++) {
            cout << ans[i][j] << " ";
        }
        cout << "\n";
    }
}
