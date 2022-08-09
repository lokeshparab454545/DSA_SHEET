class Solution {
public:
    bool isValid(vector<int>arr2, int tar, int d, int m){
        int s = 0, e = m-1;
        while(s<=e){
            int mid = s + (e-s)/2;
            if(abs(arr2[mid] - tar) <= d){
                return false;
            }
            else if(arr2[mid] < tar){
                s = mid + 1;
            }
            else{
                e = mid - 1;
            }
        }
        return true;
    }
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int n = arr1.size();
        int m = arr2.size();
        sort(arr2.begin(), arr2.end());
        int cnt = 0;
        for(int i=0; i<n; i++){
            int target = arr1[i];
            if(isValid(arr2, target, d, m) == true){
                cnt++;
            }
        }
        return cnt;
    }
};