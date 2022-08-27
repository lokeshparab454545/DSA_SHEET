class Solution {
public:
    string bestHand(vector<int>& ranks, vector<char>& suits) {
        unordered_map<char, int>mp1;
        unordered_map<int, int>mp2;
        for(auto it: suits){
            mp1[it]++;
        }
        for(auto it: ranks){
            mp2[it]++;
        }
        for(auto it: mp1){
            if(it.second >= 5){
                return "Flush";
            }
        }
        for(auto it: mp2){
            if(it.second >= 3){
                return "Three of a Kind";
            }
        }
        for(auto it: mp2){
            if(it.second >= 2){
                return "Pair";
            }
        }
        return "High Card";
    }
};