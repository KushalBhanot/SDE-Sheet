#include <bits/stdc++.h>
using namespace std;

void maxProfit(vector<int>& prices) {
    int maxPro = 0;
    int minPrice = INT_MAX;
    
    for(int i = 0; i < prices.size(); i++) {
        minPrice = min(minPrice, prices[i]);
        maxPro = max(maxPro, prices[i] - minPrice);
    }
    
    cout << maxPro;
}

int main() {
    int n; cin >> n;
    
    vector<int> prices(n);
    for(int i = 0; i < n; i++) cin >> prices[i];
    
    maxProfit(prices);
}
