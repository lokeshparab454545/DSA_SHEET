class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        unordered_map<char, int>mp;
        unordered_map<string, int>chk;
        int totSize = 0;
        for(auto it: words){
            chk[it]++;
            for(auto ele: it){
                mp[ele]++;
                totSize++;
            }
        }
        int wordSize = words[0].size();
        vector<int>ans;
        int cnt = mp.size(), i = 0, j = 0, n = s.size(), m = words.size();
        while(j<s.size()){
            if(mp.find(s[j]) != mp.end()){
                mp[s[j]]--;
                if(mp[s[j]] == 0){
                    cnt--;
                }
            }
            if(cnt == 0){
                while(cnt == 0){
                    if(mp.find(s[i]) != mp.end()){
                        mp[s[i]]++;
                            if(mp[s[i]] == 1){
                            cnt++;
                            int size = j-i+1, yo = chk.size();
                            for(int k = i; k<= j; k++){
                                string temp = s.substr(k, wordSize);
                                k+=wordSize-1;
                                if(chk.find(temp) != chk.end()){
                                    chk[temp]--;
                                    if(chk[temp] == 0){
                                        yo--;
                                    }
                                }
                            }
                            if(yo == 0 && size == totSize){
                                ans.push_back(i);
                            }
                            chk.clear();
                            for(auto it: words){
                                chk[it]++;
                            }
                        }
                    }
                    i++;
                }
            }
            j++;
        }
        return ans;
    }
};