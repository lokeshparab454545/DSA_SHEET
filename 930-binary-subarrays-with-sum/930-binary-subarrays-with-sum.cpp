class Solution {
public:
    int atMost(vector<int>&nums, int k){
        int i = 0, j = 0, n = nums.size(), sum = 0, ans = 0;
        if(k< 0) return 0;
        while(j<n){
            sum += nums[j];
            while(sum > k){
                sum -= nums[i];
                i++;
            }
            ans += (j - i + 1);
            j++;
        }
        return ans;
    }
    int numSubarraysWithSum(vector<int>& nums, int k) {
        return atMost(nums, k) - atMost(nums, k-1);
    }
};