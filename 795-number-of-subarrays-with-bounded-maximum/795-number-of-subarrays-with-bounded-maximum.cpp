class Solution {
public:
    int numSubarrayBoundedMax(vector<int>& nums, int left, int right) {
        int res = 0, prevBigger = -1, cntPrev = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] > right){
                prevBigger = i;
                cntPrev = 0;
            }
            else if(nums[i] < left){
                res += cntPrev;
            }
            else{
                cntPrev = i - prevBigger;
                res += cntPrev;
            }
        }
        return res;
    }
};