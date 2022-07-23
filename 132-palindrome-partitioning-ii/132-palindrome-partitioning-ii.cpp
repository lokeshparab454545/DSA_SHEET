class Solution {
public:
    bool ispalindrome(int i,int j,string &s, vector<vector<int>>&palindrome_dp){
        if(i>=j) return true;
        if(s[i]!=s[j]) return false;
        if(palindrome_dp[i][j] != -1) return palindrome_dp[i][j];
        return palindrome_dp[i][j] = ispalindrome(i+1,j-1,s, palindrome_dp);
    } 
    
    int minCut(string s) {
        int n=s.size();
        vector<int>dp(n+1,0);
        vector<vector<int>>palindrome_dp(n+1,vector<int>(n+1,-1));
        
        for(int ind=n-1;ind>=0;ind--){
            
            int mincost=INT_MAX;
    
            for(int i=ind;i<s.size();i++){
                if(ispalindrome(ind,i,s, palindrome_dp)){
                    int cost=1+dp[i+1];
                    mincost=min(mincost,cost);
                }
            }
            dp[ind]=mincost;
        }
        return (dp[0]-1);
    }
};