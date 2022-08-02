class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int ans = 0;
        unordered_map<int, int>freq;
        for(auto it: nums){
            ans += freq[it-k] + freq[it+k];
            freq[it]++;
        }
        return ans;
    }
};