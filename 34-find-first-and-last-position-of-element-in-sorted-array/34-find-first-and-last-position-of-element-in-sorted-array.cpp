class Solution {
public:
    int firstOcurr(vector<int>& nums, int key){
        int start = 0;
        int n = nums.size();
        int end = n-1;
        int res = -1;
        while(start<=end){
            int mid = start + (end-start)/2;
            if(nums[mid] == key){
                res = mid;
                end = mid-1;
            }
            else if(nums[mid] > key){
                end = mid-1;
            }
            else{
                start = mid+1;
            }
        }
        return res;
    }
    int lastOcurr(vector<int>& nums, int key){
        int start = 0;
        int n = nums.size();
        int end = n-1;
        int res = -1;
        while(start<=end){
            int mid = start + (end-start)/2;
            if(nums[mid] == key){
                res = mid;
                start = mid+1;
            }
            else if(nums[mid] > key){
                end = mid-1;
            }
            else{
                start = mid+1;
            }
        }
        return res;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans(2);
        ans[0] = firstOcurr(nums, target);
        ans[1] = lastOcurr(nums, target);
        return ans;
    }
};