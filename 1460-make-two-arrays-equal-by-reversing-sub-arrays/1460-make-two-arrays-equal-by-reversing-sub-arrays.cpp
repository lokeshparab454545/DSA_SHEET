class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        sort(target.begin(), target.end());
        sort(arr.begin(), arr.end());
        if(target.size() != arr.size()) return false;
        for(int i=0; i<arr.size(); i++){
            if(arr[i] != target[i]){
                return false;
            }
        }
        return true;
        
        // unordered_map<int, int>mp;
        // for(auto it: target){
        //     mp[it]++;
        // }
        // for(auto it: arr){
        //     mp[it]--;
        // }
        // for(auto it: mp){
        //     if(it.second != 0){
        //         return false;
        //     }
        // }
        // return true;
    }
};