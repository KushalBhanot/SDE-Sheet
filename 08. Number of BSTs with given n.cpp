// it uses the concept of Catalan Numbers
#include <bits/stdc++.h>
using namespace std;

void numberOfBST(int n) {
    // for n = 1, ans = 1 
    int ans = 1;
    for(int i = 2; i <= n; i++) {
        // C(n) = C(n - 1) * (2n)(2n - 1) / (n + 1)(n)
        ans = (ans * ((2 * i) * (2 * i - 1 )) / ((i + 1) * i));
    }
    
    cout << ans;
}

int main() {
    int n; cin >> n;
    
    numberOfBST(n);
}
