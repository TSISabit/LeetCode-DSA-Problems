#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define nn "\n" 
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false; 
        int original = x; 
        int rev = 0; 
        while(x != 0){
            int rem = x % 10; 
            rev = rev * 10 + rem; 
            x /= 10; 
        }

        if(rev == original) return true; 
        else return false; 
    }
};


void solve() {
    int n; cin >> n; 
    Solution sol; 
    bool ok = sol.isPalindrome(n); 
    if(ok) cout << "true\n"; 
    else cout << "false\n"; 
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

   // int t; cin >> t;
   // while (t--) {
        solve();
   // }
    return 0;
}