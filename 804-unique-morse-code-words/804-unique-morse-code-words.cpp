class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        unordered_set<string>st;
        vector<string>codes = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        string s = "";
        for(auto it: words){
            for(auto ch: it){
                s += codes[ch - 'a'];
            }
            st.insert(s);
            s = "";
        }
        return st.size();
    }
};