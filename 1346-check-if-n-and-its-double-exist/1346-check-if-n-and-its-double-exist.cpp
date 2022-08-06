class Solution {
public:
    bool binS(vector<int>&arr, int tar, int check){
        int n = arr.size();
        int s = 0, e = n-1;
        while(s<=e){
            int m = s + (e-s)/2;
            if(arr[m] == tar && m != check){
                return true;
            }
            else if(arr[m] < tar){
                s = m+1;
            }
            else{
                e = m-1;
            }
        }
        return false;
    }
    bool checkIfExist(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        for(int i = 0; i<arr.size(); i++){
            int tar = 2 * arr[i];
            if(binS(arr, tar, i)){
                return true;
            }
        }
        return false;
    }
};