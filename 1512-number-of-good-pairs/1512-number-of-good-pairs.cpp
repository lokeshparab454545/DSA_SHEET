class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int n = nums.size(), cnt = 0; 
        unordered_map<int, int>mp;
        for(auto it: nums){
            mp[it]++;
        }
        for(auto it: mp){
            if(it.second > 1){
                int temp = it.second;
                cnt += (((temp)*(temp-1))/2);
            }
        }
        return cnt;
    }
};