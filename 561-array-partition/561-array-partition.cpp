class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        // 1 2 2 5 6 6
        int i =0, j = 1, sum = 0;
        while(j<nums.size()){
            sum += min(nums[i], nums[j]);
            i+=2;
            j+=2;
        }
        return sum;
    }
};