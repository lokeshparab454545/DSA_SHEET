class Solution {
public:
    string reverseWords(string s) {
        int i = 0, n = s.size();
        for(int j=1; j<=n; j++){
            if(s[j] == ' ' || j == n){
                reverse(s.begin()+i, s.begin()+j);
                i = j+1;
            }
        }
        return s;
    }
};