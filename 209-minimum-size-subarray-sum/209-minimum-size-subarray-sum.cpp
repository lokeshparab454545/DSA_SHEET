class Solution {
public:
    bool existWindow(vector<int> &nums, int size, int s) {
        int sum = 0;
        for (int i = 0; i < nums.size(); ++i) {
            if (i >= size) sum -= nums[i-size];
            sum += nums[i];
            if (sum >= s) return true;
        }
        return false;
    }
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size(), s = 1, e = n, ans = 0;
        while(s<=e){
            int mid = s + (e-s)/2;
            if(existWindow(nums, mid, target)){
                 ans = mid;
                 e = mid-1;
            }
            else{
                s = mid+1;
            }
        }
        return ans;
    }
};

// class Solution {
// public:
//     int minSubArrayLen(int s, vector<int>& nums) {
//         int left = 1, right = nums.size();
//         while (left < right) {
//             int mid = left + ((right - left) >> 1);
//             if (existWindow(nums, mid, s)) right = mid;
//             else left = mid + 1;
//         }
//         return existWindow(nums, right, s) ? right : 0;
//     }
    
// };