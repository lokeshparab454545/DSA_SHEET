class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int i = 0, n = nums.size(), j = n-1, maxi = INT_MIN;
        while(i<=j){
            int sum = nums[i] + nums[j];
            maxi = max(maxi, sum);
            i++; j--;
        }
        return maxi;
    }
};