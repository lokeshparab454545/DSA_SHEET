class Solution {
public:
    int ans = 0;
    int solve(int i, int j, vector<int>& nums1, vector<int>& nums2, vector<vector<int>>&dp){
        if(i>=nums1.size() || j>=nums2.size()){
            return 0;
        }
        if(dp[i][j] != -1){
            return dp[i][j];
        }
        solve(i+1, j, nums1, nums2, dp);
        solve(i, j+1, nums1, nums2, dp);
        int common = (nums1[i] == nums2[j]) ? 1 + solve(i+1, j+1, nums1, nums2, dp) : 0;
        ans = max(ans, common);
        return dp[i][j] = common;
    }
    int findLength(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        vector<vector<int>>dp(n, vector<int>(m, -1));
        solve(0, 0, nums1, nums2, dp);
        return ans;
    }
};