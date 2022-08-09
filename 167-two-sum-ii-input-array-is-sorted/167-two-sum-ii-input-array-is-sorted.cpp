class Solution {
public:
    int binS(vector<int>&numbers, int n, int tar, int i){
        int s = 0, e = n-1;
        while(s<=e){
            int m = s + (e-s)/2;
            if(numbers[m] ==  tar && m != i){
                return m;
            }
            else if(numbers[m] > tar){
                e = m-1;
            }
            else{
                s = m+1;
            }
        }
        return -1;
    }
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        vector<int>ans;
        for(int i=0; i<n; i++){
            int tar = target - numbers[i];
            if(binS(numbers, n, tar, i) != -1){
                int temp = binS(numbers, n, tar, i);
                ans.push_back(i+1);
                ans.push_back(temp+1);
                break;
            }
        }
        return ans;
    }
};