class Solution {
public:
    int binS(vector<int>&nums, int n, int tar, int i){
        int s = 0, e = n-1;
        while(s<=e){
            int m = s + (e-s)/2;
            if(nums[m] ==  tar && m != i){
                return nums[m];
            }
            else if(nums[m] > tar){
                e = m-1;
            }
            else{
                s = m+1;
            }
        }
        return -1;
    }
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        for(int i=0; i<n; i++){
            int tar = nums[i];
            int ans = binS(nums, n, tar, i);
            if(ans != -1){
                return ans;
            }
        }
        return -1;
    }
};