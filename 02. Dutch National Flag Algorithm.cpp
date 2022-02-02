#include <bits/stdc++.h>
using namespace std;

void sortColors(vector<int>& nums) {
    int low = 0, mid = 0;
    int high = nums.size() - 1;
    
    while(mid <= high) {
        switch(nums[mid]) {
            case 0:
                swap(nums[low], nums[mid]);
                low++, mid++;
                break;
                
            case 1:
                mid++;
                break;
                
            case 2:
                swap(nums[mid], nums[high]);
                high--;
                break;
        }
    }
}

int main() {
    int n; cin >> n;
    
    vector<int> nums(n);
    for(int i = 0; i < n; i++)  cin >> nums[i];
    
    sortColors(nums);
    for(int i = 0; i < n; i++)  cout << nums[i] << " ";
}
