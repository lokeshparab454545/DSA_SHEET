class Solution {
public:
    int rot(vector<int> nums, int start, int end){
        int n = nums.size();
        while(start<=end){
            int mid = start + (end-start)/2;
            int next = (mid+1)%n;
            int prev = (mid-1+n)%n;
            if(nums[mid] <= nums[prev] && nums[mid] <= nums[next]){
                return nums[mid];
            }
            else if(nums[mid] <= nums[end]){
                end = mid-1;
            }
            else{
                start = mid+1;
            }
        }
        return -1;
    }
    int findMin(vector<int>& nums) {
        return rot(nums, 0, nums.size()-1);
    }
};