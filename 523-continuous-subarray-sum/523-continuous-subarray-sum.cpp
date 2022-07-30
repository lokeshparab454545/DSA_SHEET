class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        if(nums.size() < 2){
            return false;
        }
        unordered_map<int, int>mp;
        mp[0] = -1;
        int preSum = 0;
        for(int i=0; i<nums.size(); i++){
            preSum += nums[i];
            if(k !=0 ){
                preSum %= k;
            }
            if(mp.find(preSum) != mp.end()){
                if(i - mp[preSum] > 1){
                    return true;
                }
            }
            else
                mp[preSum] = i;
        }
        return false;
    }
};