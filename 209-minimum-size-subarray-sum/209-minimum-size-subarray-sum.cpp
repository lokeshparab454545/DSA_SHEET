class Solution {
public:
    int minSubArrayLen(int k, vector<int>& nums) {
        int i = 0, j = 0, sum = 0, mini = INT_MAX;
        while(j<nums.size()){
            sum += nums[j];
            if(sum < k){
                j++;
            }
            else if(sum >= k){
                while(sum >= k){
                    mini = min(mini, j-i+1);
                    sum -= nums[i];
                    i++;
                }
                j++;
            }
        }
        if(mini == INT_MAX){
            return 0;
        }
        return mini;
    }
};
