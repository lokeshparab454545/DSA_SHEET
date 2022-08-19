class Solution {
public:
    bool isPossible(vector<int>& nums) {
        unordered_map<int, int>freq;
        for(auto it: nums){
            freq[it]++;
        }
        unordered_map<int, int>subs;
        for(auto it: nums){
            if(freq[it] == 0) continue;
            if(subs[it] > 0){
                subs[it]--;
                freq[it]--;
                
                subs[it+1]++;
            }
            else if(freq[it] > 0 && freq[it+1] > 0 && freq[it+2] > 0){
                freq[it]--;
                freq[it+1]--;
                freq[it+2]--;
                
                subs[it+3]++;
            }
            else{
                return false;
            }
        }
        return true;
    }
};