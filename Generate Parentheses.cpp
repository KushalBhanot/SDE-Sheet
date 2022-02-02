#include <bits/stdc++.h>
using namespace std;

void generateParentheses(int n, int open, int close, string s, vector<string>& ans) {
    if(close == n && open == n) {
        ans.push_back(s);
        return;
    }
    
    if(open < n)
        generateParentheses(n, open + 1, close, s + "{", ans);
    if(close < open)
        generateParentheses(n, open, close + 1, s + "}", ans);
}

int main() {
    int n; cin >> n;
    
    vector<string> ans;
    generateParentheses(n, 0, 0, "", ans);
    
    for(auto it: ans)
        cout << it << "\n";
}
