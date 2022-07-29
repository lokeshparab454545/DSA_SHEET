class Solution {
public:
    vector<int>solve(string s){
        if(s.size() == 0){
            return {};
        }
        vector<int>v;
        int ind = 0;
        unordered_map<char, int>mp;
        for(int i=0; i<s.size(); i++){
            if(mp.find(s[i]) == mp.end()){
                mp.insert({s[i], ind++});
                v.push_back(mp[s[i]]);
            }
            else{
                v.push_back(mp[s[i]]);
            }
        }
        return v;
    }
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<int>v = solve(pattern);
        vector<string>ans;
        for(int i=0; i<words.size(); i++){
            vector<int>temp = solve(words[i]);
            if(temp == v){
                ans.push_back(words[i]);
            }
        }
        return ans;
    }
};