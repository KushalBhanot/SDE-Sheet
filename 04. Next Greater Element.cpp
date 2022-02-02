#include <bits/stdc++.h>
using namespace std;

void nextGreaterElement(vector<int>& nums) {
    int n = nums.size();
    vector<int> nge(n, -1);
    stack<int> st;
    for(int i = 2 * n - 1; i >= 0; i--) {
        while(!st.empty() && st.top() <= nums[i % n])
            st.pop();
            
        if(i < n && !st.empty())
            nge[i] = st.top();
        else if(i < n && st.empty())
            nge[i] = -1;
        
        st.push(nums[i % n]);
    }
    for(int i = 0; i < n; i++) cout << nge[i] << " ";
}

int main() {
    int n; cin >> n;
    
    vector<int> nums(n);
    for(int i = 0; i < n; i++) cin >> nums[i];
    
    nextGreaterElement(nums);
}
