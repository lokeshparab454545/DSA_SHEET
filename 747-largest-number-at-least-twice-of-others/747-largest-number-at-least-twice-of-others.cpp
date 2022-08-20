class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int maxNum = INT_MIN;
        int maxIndex = -1, n = nums.size();
        for(int i = 0; i<n; i++){
            if(maxNum < nums[i]){
                maxNum = nums[i];
                maxIndex = i;
            }
        }
        for(int i = 0; i<n; i++){
            if(nums[i] != maxNum && maxNum < 2*nums[i]){
                return -1;
            }
        }
        return maxIndex;
    }
};