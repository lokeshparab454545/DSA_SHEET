class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        // sort(target.begin(), target.end());
        // sort(arr.begin(), arr.end());
        // if(target.size() != arr.size()) return false;
        // int i = 0, j = 0;
        // while(i<target.size()){
        //     if(target[i] != arr[j]){
        //         return false;
        //     }
        //     i++; j++;
        // }
        // return true;
        
        unordered_map<int, int>mp;
        for(auto it: target){
            mp[it]++;
        }
        for(auto it: arr){
            mp[it]--;
        }
        for(auto it: mp){
            if(it.second != 0){
                return false;
            }
        }
        return true;
    }
};