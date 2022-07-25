class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int p1 = 0, p2 = 0;
        for(int i=0; i<s.size(); i++){
            if(s[i] == '#'){
                p1--;
                p1 = max(0, p1);
            }
            else{
                s[p1] = s[i];
                p1++;
            }
        }
        for(int i=0; i<t.size(); i++){
            if(t[i] == '#'){
                p2--;
                p2 = max(0, p2);
            }
            else{
                t[p2] = t[i];
                p2++;
            }
        }
        if(p1 != p2){
        return false;
        }
        else{
            for(int i=0; i<p1; i++){
                if(s[i] != t[i]) return false;
            }
            return true;
        }
        }
};