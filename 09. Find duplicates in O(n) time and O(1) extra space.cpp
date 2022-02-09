#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> arr(n);
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    
    // count the frequency
    for(int i = 0; i < n; i++) {
        arr[arr[i] % n] = arr[arr[i] % n] + n;
    }
    
    // print repeating elements
    for(int i = 0; i < n; i++) {
        if(arr[i] >= n * 2) {
            cout << i << "\n";
        }
    }
}
