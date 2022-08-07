class Solution {
public:
    int mySqrt(int x) {
        long long s = 0, e = x;
        int ans;
        while(s<=e){
            long long mid = (s + e)/2;
            if(mid*mid==x) return mid;
            else if(mid * mid > x) e = mid - 1;
            else{
                ans = mid;
                s = mid+1;
            }
        }
        return ans;
    }
};