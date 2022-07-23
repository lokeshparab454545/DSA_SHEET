class Solution {
public:
    int solve(int i, int n, int k, vector<int>&arr, vector<int>&dp){
        if(i == n) return 0;
        if(dp[i] != -1) return dp[i];
        int len = 0, maxAns = INT_MIN, maxi = INT_MIN;
        for(int ind=i; ind<min(n, i+k); ind++){
            len++;
            maxi = max(maxi, arr[ind]);
            int sum = len*maxi + solve(ind+1, n, k, arr, dp);
            maxAns = max(sum, maxAns);
        }
        return dp[i] = maxAns;
    }
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        int n = arr.size();
        vector<int>dp(n+1, 0);
        // return solve(0, n, k, arr, dp);
        for(int i=n-1; i>=0; i--){
             int len = 0, maxAns = INT_MIN, maxi = INT_MIN;
            for(int ind=i; ind<min(n, i+k); ind++){
                len++;
                maxi = max(maxi, arr[ind]);
                int sum = len*maxi + dp[ind+1];
                maxAns = max(sum, maxAns);
            }
            dp[i] = maxAns;
        }
        return dp[0];
    }
};