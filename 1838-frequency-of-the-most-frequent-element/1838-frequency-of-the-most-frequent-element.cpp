class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        long long left = 0, maxi = 0, sum = 0;
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size(); i++){
            sum += nums[i];
            while(nums[i]*(i - left + 1) - sum > k){
                sum -= nums[left];
                left++;
            }
            maxi = max(maxi, i - left + 1);
        }
        return maxi;
    }
};