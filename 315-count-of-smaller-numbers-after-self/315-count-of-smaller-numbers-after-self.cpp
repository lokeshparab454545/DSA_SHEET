class Solution {
public:
    void merge(vector<int>&ans, vector<pair<int, int>>&v, int left, int mid, int right){
        vector<pair<int, int>>temp(right - left + 1);
        int i = left;
        int j = mid+1;
        int k = 0;
        while(i<=mid && j<=right){
            if(v[i].first <= v[j].first){
                temp[k] = v[j];
                k++; j++;
            }
            else{ 
                ans[v[i].second] += right - j +1;
                temp[k] = v[i];
                k++; i++;
            }
        }
        while(i<=mid){
            temp[k] = v[i];
            k++; i++;
        }
        while(j<=right){
            temp[k] = v[j];
            k++; j++;
        }
        int cnt = 0;
        for(int i=left; i<=right; i++){
            v[i] = temp[cnt];
            cnt++;
        }
    }
    void mergeSort(vector<int>&ans, vector<pair<int, int>>&v, int left, int right){
        if(left < right){
            int mid = left + (right - left)/2;
            mergeSort(ans, v, left, mid);
            mergeSort(ans, v, mid+1, right);
            merge(ans, v, left, mid, right);
        }
    }
    vector<int> countSmaller(vector<int>& nums) {
        int n = nums.size();
        vector<pair<int, int>>v(n);
        for(int i=0; i<n; i++){
            pair<int, int>p;
            p.first = nums[i];
            p.second = i;
            v[i] = p;
        }
        vector<int>ans(n);
        mergeSort(ans, v, 0, n-1);
        return ans;
    }
};