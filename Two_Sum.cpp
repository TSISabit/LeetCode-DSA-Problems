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
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size(); 

        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                if(nums[i] + nums[j] == target) return {i, j}; 
            }
        }
        return {}; 
    }
};


void solve() {
    int n, target; cin >> n >> target;
    vector<int>nums(n); 
    for(int i = 0; i < n; i++) cin >> nums[i];
    
    Solution sol; 
    vector<int>ans = sol.twoSum(nums, target); 
    if(!ans.empty()) cout << ans[0] << " " << ans[1] << nn; 
    else cout << -1 << nn; 
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    //int t; cin >> t;
    //while (t--) {
        solve();
    //}
    return 0;
}