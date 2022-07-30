class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i = 0, j = 0, cnt[128] = {}, n = s.size(), ans = 0;
        for(; j<n; j++){
            cnt[s[j]]++;
            while(cnt[s[j]] > 1){
                cnt[s[i]]--;
                i++;
            }
            ans = max(ans, j-i+1);
        }
        return ans;
    }
};